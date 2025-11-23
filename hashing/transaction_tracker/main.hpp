#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <map>
#include <optional>
#include <utility>
#include <sstream>
#include <iomanip>


class TransactionTracker {
public:
    void add_transaction(const std::string& transaction_id, double amount, const std::string& type);

    std::optional<std::pair<double, std::string>> get_transaction(const std::string& transaction_id);

    bool delete_transaction(const std::string& transaction_id);

    std::map<std::string, double> get_aggregate_statistics();

    std::string export_transactions(double min_amount = 0);

private:
    std::map<std::string, std::pair<double, std::string>> transactions;
};

#endif  // SOLUTION_HPP_