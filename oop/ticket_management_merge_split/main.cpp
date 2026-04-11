#include "solution.hpp"
#include <vector>

std::string TicketManagementSystem::sell_ticket(const std::string& journey_id, double price) {
    std::string trans_id = generate_unique_id();
    tickets_[trans_id] = {journey_id, price, false, false, {}, {}};
    return trans_id;
}

std::vector<std::string> TicketManagementSystem::sell_group_ticket(const std::string& journey_id, int num_tickets, double price_per_ticket) {
    std::vector<std::string> trans_ids;
    for (int i = 0; i < num_tickets; ++i) {
        std::string trans_id = sell_ticket(journey_id, price_per_ticket);
        tickets_[trans_id].is_group = true;
        trans_ids.push_back(trans_id);
    }
    for (const auto& trans_id : trans_ids) {
        tickets_[trans_id].group_trans_ids = trans_ids;
    }
    return trans_ids;
}

bool TicketManagementSystem::refund_ticket(const std::string& trans_id) {
    return tickets_.erase(trans_id) > 0;
}

std::optional<TicketInfo> TicketManagementSystem::get_transaction_info(const std::string& trans_id) {
    if (tickets_.find(trans_id) == tickets_.end()) return std::nullopt;
    auto& ticket = tickets_[trans_id];
    return TicketInfo{ticket.journey_id, ticket.price};
}

double TicketManagementSystem::total_sales() {
    double total = 0;
    for (const auto& [_, ticket] : tickets_) {
        total += ticket.price;
    }
    return total;
}

std::unordered_map<std::string, int> TicketManagementSystem::journey_sales_summary() {
    std::unordered_map<std::string, int> summary;
    for (const auto& [_, ticket] : tickets_) {
        summary[ticket.journey_id]++;
    }
    return summary;
}

std::string TicketManagementSystem::merge_tickets(const std::vector<std::string>& trans_ids) 
{
    if (trans_ids.empty()|| !std::all_of(trans_ids.begin(), trans_ids.end(), [&](const std::string& id)
    {
       return tickets_.count(id) && tickets_.at(id).journey_id == tickets_.at(trans_ids[0]).journey_id;
    }))
    {
        return "";
    }
    double total_price = 0;
    std::string journey_id = tickets_.at(trans_ids[0]).journey_id;
    for(const auto & id : trans_ids)
    {
        total_price += tickets_.at(id).price;
        refund_ticket(id);
    }
    
    auto new_id = sell_ticket(journey_id, total_price);
    tickets_[new_id].is_merged = true;
    tickets_[new_id].original_trans_ids = trans_ids;
    return new_id;
    
}

std::vector<std::string> TicketManagementSystem::split_ticket(const std::string& trans_id, int num_splits) 
{
    if(!tickets_.count(trans_id) || num_splits <  2) return {};
    double  split_price = 0;
    std::string journey_id = tickets_.at(trans_id).journey_id;
    auto price_ = tickets_.at(trans_id).price;
    split_price = price_ / num_splits;
    std::vector<std::string>pricelist;
    for(int i = 0; i < num_splits; i++)
    {
        auto result = sell_ticket(journey_id,  split_price);
        pricelist.push_back(result);
    }
    refund_ticket(trans_id);
    
    return pricelist;
}

std::string TicketManagementSystem::generate_unique_id() 
{
    // Simple incrementing integer ID for uniqueness
    return std::to_string(current_id_++);
}