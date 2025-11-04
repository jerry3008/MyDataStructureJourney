#include "solution.hpp"

bool OrderManagementSystem::add_item(const std::string &order_id, const std::string &item_id, int quantity, float price) {
    if (price < 0 || quantity < 0) {
        return false;  // Invalid quantity or price
    }
    if (!orders.count(order_id)) {
        orders[order_id] = {};
    }
    orders[order_id][item_id] = Item{quantity, price};
    return true;
}

std::optional<Item> OrderManagementSystem::get_item(const std::string &order_id, const std::string &item_id) {
    if (orders.count(order_id) && orders[order_id].count(item_id)) {
        return orders[order_id][item_id];
    }
    return std::nullopt;
}

bool OrderManagementSystem::delete_item(const std::string &order_id, const std::string &item_id) {
    if (orders.count(order_id) && orders[order_id].count(item_id)) {
        orders[order_id].erase(item_id);
        if (orders[order_id].empty()) {
            orders.erase(order_id);
        }
        return true;
    }
    return false;
}

std::optional<OrderAggregate> OrderManagementSystem::aggregate_order(const std::string &order_id) 
{
    if (orders.count(order_id))
    {
        OrderAggregate aggregate{};
        for (const auto& [item_id, item] : orders[order_id]) 
        {
           if(item.price > 0)
           {
                
                aggregate.total_quantity += item.quantity;
                aggregate.total_price += item.price * item.quantity;
                aggregate.items.push_back(item);
                
           }
        }
        return aggregate;
    }
    // TODO: This method should return aggregated data for the given order, including the total quantity of items, 
    // the total price of the order, and a list of item details excluding the items with a price of zero. 
    // If the order does not exist, return `std::nullopt`.
    return std::nullopt;
}