#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>
#include <map>

namespace SuperMarket {
    void addItem(const std::string &itemName, int quantity);
    void displayItems();
    double applyDiscount(double total, double discountRate);
    double calculateTax(double amount);
}

#endif  // SOLUTION_HPP_