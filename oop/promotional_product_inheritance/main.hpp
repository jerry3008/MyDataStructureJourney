#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <sstream>
#include <iostream>

class Product {
public:
    Product(const std::string &name, double price);
    virtual std::string display() const;

protected:
    std::string name_;
    double price_;
};

class PromotionalProduct : public Product {
public:
    PromotionalProduct(const std::string &name, double price);
    void addPromotion(const std::string &message, double discount);
    std::string display() const override;

private:
    std::string promotionMessage_;
    double discount_ = 0.0;
};

#endif // SOLUTION_HPP_