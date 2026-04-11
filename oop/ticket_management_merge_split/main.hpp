#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <vector>
#include <unordered_map>
#include <optional>
#include <algorithm>

struct Ticket {
    std::string journey_id;
    double price;
    bool is_group;
    bool is_merged;
    std::vector<std::string> group_trans_ids;
    std::vector<std::string> original_trans_ids;
};

struct TicketInfo {
    std::string journey_id;
    double price;
};

class TicketManagementSystem {
public:
    std::string sell_ticket(const std::string& journey_id, double price);
    std::vector<std::string> sell_group_ticket(const std::string& journey_id, int num_tickets, double price_per_ticket);
    bool refund_ticket(const std::string& trans_id);
    std::optional<TicketInfo> get_transaction_info(const std::string& trans_id);
    double total_sales();
    std::unordered_map<std::string, int> journey_sales_summary();

    std::string merge_tickets(const std::vector<std::string>& trans_ids);
    std::vector<std::string> split_ticket(const std::string& trans_id, int num_splits);

private:
    std::unordered_map<std::string, Ticket> tickets_;
    int current_id_ = 0;
    std::string generate_unique_id();
};

#endif  // SOLUTION_HPP_