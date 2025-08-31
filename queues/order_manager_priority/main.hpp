#include <map>
#include <string>
#include <optional>
#include <utility>
#include <iostream>
#include <vector>

class OrderManager {
public:
    void add_order(const std::string &customer, int priority);
    
    std::optional<std::pair<int, std::string>> process_order();
    
private:
    std::map<int, std::vector<std::string>> order_queue;
};

#endif