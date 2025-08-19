#include <iostream>
#include <unordered_set>
#include <string>

class InventoryManager {
public:
    InventoryManager() {
        
        product_stock = {"apple", "banana","orange"};
    }
    
    bool is_product_available(const std::string& product) 
    {
        return product_stock.find(product) != product_stock.end();
    }

    void add_product(const std::string& product) 
    {
        product_stock.insert(product);
    }

    void remove_product(const std::string& product) {
        product_stock.erase(product);
    }
    void print_inventory() const 
    {
        for (const auto& item : product_stock) 
        {
            std::cout << item << " ";
        }
            std::cout << std::endl;
    }


private:
std::unordered_set<std::string>product_stock;
};

int main() {
    InventoryManager inventory;
    std::string product_query = "apple";
    // TODO: Check if 'apple' is available in the inventory and print the result
    bool is_product_available1 =  inventory.is_product_available(product_query);
    std::cout<<is_product_available1<<std::endl;
    // TODO: Add 'grape' to the inventory and print confirmation
    inventory.add_product("grape");
    
    inventory.print_inventory();
    // TODO: Remove 'banana' from the inventory and print confirmation
    inventory.remove_product("banana");
    inventory.print_inventory();
    return 0;
}