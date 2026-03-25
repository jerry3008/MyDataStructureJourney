#include "solution.hpp"

namespace SuperMarket {
    // TODO: Define any data structure needed
    std::map<std::string, int> inventory;
    const double TAX_RATE = 0.1;
    void addItem(const std::string &itemName, int quantity) 
    {
        
        inventory[itemName] += quantity;

        // TODO: Implement logic to add items to inventory
    }

    void displayItems() 
    {
        std::cout<<"Inventory Items: "<< std::endl;
        for(const auto [item, itemquantity] : inventory)
        {
            std::cout<<"Item is: "<< item<< " and the quantity is "<< itemquantity<<std::endl;
        }
        // TODO: Implement logic to display inventory items
    }

    double applyDiscount(double total, double discountRate) 
    {
        auto finalprice = total - ( total * discountRate);
        // TODO: Implement discount logic and return final amount
        return finalprice;
    }

    double calculateTax(double amount) 
    {
        return amount * TAX_RATE;
        // TODO: Implement tax calculation and return taxed amount
        return 0.0;
    }
}

int main() {
    SuperMarket::addItem("ExampleItem", 10);
    SuperMarket::displayItems();
    
    double total = 100;
    double discountedTotal = SuperMarket::applyDiscount(total, 0.15);
    double taxedAmount = SuperMarket::calculateTax(discountedTotal);

    std::cout << "Total after 15% discount: $" << discountedTotal << std::endl;
    std::cout << "Taxed amount at 10% tax rate: $" << taxedAmount << std::endl;

    return 0;
}