#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <vector>
#include <unordered_map>

struct Email {
    std::string from_user;
    std::string subject;
    std::string body;
    std::string to_user;
    bool flagged;
};

struct UserStatus {
    bool active = true;
};

class EmailSystem {
public:
    bool send_email(const std::string& from_user, const std::string& to_user, const std::string& subject, const std::string& body);
    std::vector<Email> query_inbox(const std::string& user);
    std::unordered_map<std::string, int> sent_emails_count();
    bool flag_email(const std::string& user, const std::string& subject);
    bool undo_send(const std::string& from_user, const std::string& subject);
    bool logout_user(const std::string& user);

private:
    std::unordered_map<std::string, std::vector<Email>> inboxes_;
    std::unordered_map<std::string, std::vector<Email>> sent_emails_;
    std::unordered_map<std::string, int> sent_emails_count_;
    std::unordered_map<std::string, UserStatus> status_;
};

#endif  // SOLUTION_HPP_