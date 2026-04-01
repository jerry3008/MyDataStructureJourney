#include "solution.hpp"
#include <iomanip> 

// Implement constructor and methods for Product class
Product::Product(const std::string &name, double price) 
    : name_(name), price_(price) {}

std::string Product::display() const {
     std::ostringstream oss;
     oss << "Product: " << name_ << ", Price: $" << std::fixed << std::setprecision(2) << price_;
    // Default implementation to display product's name and price
    return oss.str(); // Temporary placeholder
}

// TODO: Implement the constructors for PromotionalProduct
PromotionalProduct::PromotionalProduct(const std::string &name, double price)  : Product(name, price) { }

// TODO: Implement addPromotion to assign promotional message and discount
void PromotionalProduct::addPromotion(const std::string &message, double discount)
{
    promotionMessage_ = message;
    discount_ = discount;
    
}

// TODO: Override the display method to output the name, original price, promotional message, and discounted price.
std::string PromotionalProduct::display() const 
{
    double finalPrice = price_ * (1 - discount_ / 100.0);
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(2)<<  "Product: " << name_ << ", Original Price: $"<< price_<< ", Promotion: "<<promotionMessage_<< ", Final Price: $"<< finalPrice;
    
     return oss.str();
    // Default implementation to display product's name and price
}

int main() {
    Product basicProduct("Basic Tee", 19.99);
    std::cout << basicProduct.display() << std::endl;

    PromotionalProduct promoProduct("Fancy Hat", 49.99);
    promoProduct.addPromotion("20% off launch special!", 20);
    std::cout << promoProduct.display() << std::endl;

    return 0;
}