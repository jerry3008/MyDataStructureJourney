#include "solution.hpp"
#include <numeric>
#include <vector>

bool ProductInventory::add_product(const std::string &product_id, const std::string &name, float price, int quantity) 
{
    if(products.count(product_id)) return false;
    Product product{}; 
    product.name = name;
    product.price = price;
    product.quantity = quantity;
    //or products[product_id] = Product{name, price, quantity};
    
    products[product_id] = product;
     
    return true;
}

std::optional<Product> ProductInventory::get_product(const std::string &product_id) 
{
    if(products.count(product_id))
    {
        return products[product_id];
    }
    // TODO: Retrieve the product details if it exists, otherwise return std::nullopt.
    return std::nullopt; 
}

bool ProductInventory::update_price(const std::string &product_id, float new_price) 
{
    
    if(products.count(product_id))
    {
        products[product_id].price = new_price; 
        return true;
    }
    // TODO: Update the price of the product if it exists.
    return false;
}

std::vector<std::string> ProductInventory::filter_products(std::optional<float> min_price, std::optional<float> max_price, std::optional<int> min_quantity, std::optional<int> max_quantity) 
{
    std::vector<std::string> filtered_products;
    for(const auto& [product_id, product] : products)
    {
        if (min_price && product.price < min_price.value()) continue;
        if (max_price && product.price > max_price.value()) continue;
        if (min_quantity && product.quantity < min_quantity.value()) continue;
        if (max_quantity && product.quantity > max_quantity.value()) continue;
        filtered_products.push_back(product_id);
    }
    // TODO: Filter the products based on the specified criteria.
    return filtered_products;
}

std::map<std::string, float> ProductInventory::inventory_stats() 
{
    int total_products = products.size();
    float  total_price = std::accumulate(products.begin(), products.end(), 0.0f, [](float sum, const auto& pair)
    {
        return sum + pair.second.price;
    });
    int total_quantity = std::accumulate(products.begin(), products.end(), 0, [](int sum, const auto& pair)
    {
        return sum + pair.second.quantity;
    });
    
    float average_price = total_products > 0 ? std::round((total_price/total_products) * 100)/100 : 0.0f;
    
    // TODO: Calculate and return the inventory statistics.
    return 
    {
        {"total_products", static_cast<float>(total_products)},
        {"average_price", average_price},
        {"total_quantity", static_cast<float>(total_quantity)}
    };
}