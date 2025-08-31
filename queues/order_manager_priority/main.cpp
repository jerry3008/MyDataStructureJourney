#include "main.hpp"
#include <utility>

void OrderManager::add_order(const std::string& customer, int priority) 
{
    order_queue[priority].push_back(customer);
}

std::optional<std::pair<int, std::string>> OrderManager::process_order() 
{
    if(order_queue.empty())return std::nullopt;
    auto it = order_queue.begin();
    std::string customer = it->second.front();
    it->second.erase(it->second.begin());
    if (it->second.empty()) 
    {
        order_queue.erase(it);
    }
    return std::make_pair(it->first, customer);
    
}

int main() {
    OrderManager om;

    // Add orders to the system
    om.add_order("John", 2);
    om.add_order("Alice", 1);

    // Process orders and display results
    auto processed_order = om.process_order();
    if (processed_order) {
        std::cout << "Processed order - Customer: " << processed_order->second << ", Priority: " << processed_order->first << std::endl;
    } else {
        std::cout << "No orders to process" << std::endl;
    }

    processed_order = om.process_order();
    if (processed_order) {
        std::cout << "Processed order - Customer: " << processed_order->second << ", Priority: " << processed_order->first << std::endl;
    } else {
        std::cout << "No orders to process" << std::endl;
    }

    // Attempt to process an order when none exist
    processed_order = om.process_order();
    if (processed_order) {
        std::cout << "Processed order - Customer: " << processed_order->second << ", Priority: " << processed_order->first << std::endl;
    } else {
        std::cout << "No orders to process" << std::endl;
    }

    return 0;
}