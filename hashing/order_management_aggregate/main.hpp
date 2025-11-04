#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <vector>
#include <optional>

struct Item {
    int quantity;
    float price;
};

struct OrderAggregate {
    int total_quantity;
    float total_price;
    std::vector<Item> items;
};

class OrderManagementSystem {
public:
    bool add_item(const std::string &order_id, const std::string &item_id, int quantity, float price);

    std::optional<Item> get_item(const std::string &order_id, const std::string &item_id);

    bool delete_item(const std::string &order_id, const std::string &item_id);

    std::optional<OrderAggregate> aggregate_order(const std::string &order_id);

private:
    std::unordered_map<std::string, std::unordered_map<std::string, Item>> orders;
};

#endif  // SOLUTION_HPP_