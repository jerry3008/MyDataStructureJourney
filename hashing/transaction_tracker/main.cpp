#include "solution.hpp"

void TransactionTracker::add_transaction(const std::string& transaction_id, double amount, const std::string& type) 
{
    
    transactions[transaction_id] = {amount, type};
}

std::optional<std::pair<double, std::string>> TransactionTracker::get_transaction(const std::string& transaction_id) {
    auto it = transactions.find(transaction_id);
    if (it != transactions.end()) 
    {
        return it -> second;
    
    }
    return std::nullopt;
}

bool TransactionTracker::delete_transaction(const std::string& transaction_id) {
    auto it = transactions.find(transaction_id);
    if (it != transactions.end()) 
    {
        transactions.erase(transaction_id);
        return true;
    
    }
    return false;
}

std::map<std::string, double> TransactionTracker::get_aggregate_statistics() 
{
    double total_credit = 0.0;
    double total_debit = 0.0;
    for(const auto&[id, transaction] : transactions)
    {
        if(transaction.second == "credit")
        {
            total_credit += transaction.first;
        }else if (transaction.second == "debit") 
        {
            total_debit += transaction.first;
        }
    }
    
    return {{"total_credit", total_credit}, {"total_debit", total_debit}};
}

std::string TransactionTracker::export_transactions(double min_amount) 
{
    std::ostringstream oss;
    
    auto statistics = get_aggregate_statistics();
    oss << "Transactions:\n";
    for(const auto& [id, transaction]: transactions)
    {
        if (transaction.first > min_amount) 
        {
          oss<<"ID: "<<id<< ", Amount: " << transaction.first << ", Type: " << transaction.second << "\n";  
        }
    }
    oss<< "Statistics:\n";
    
    oss<< "Total Credit: " << statistics["total_credit"]<< "\n";
    oss<< "Total Debit: "<< statistics["total_debit"]<< "\n";
    
    return oss.str();
}