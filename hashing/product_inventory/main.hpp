#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <map>
#include <optional>
#include <vector>
#include <numeric>
#include <cmath>

struct Product {
    std::string name;
    float price;
    int quantity;
};

class ProductInventory {
public:
    bool add_product(const std::string &product_id, const std::string &name, float price, int quantity);
    std::optional<Product> get_product(const std::string &product_id);
    bool update_price(const std::string &product_id, float new_price);
    
    std::vector<std::string> filter_products(std::optional<float> min_price, std::optional<float> max_price, std::optional<int> min_quantity, std::optional<int> max_quantity);
    std::map<std::string, float> inventory_stats();

private:
    std::map<std::string, Product> products;
};

#endif  // SOLUTION_HPP_