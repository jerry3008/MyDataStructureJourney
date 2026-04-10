#include "solution.hpp"

bool EmailSystem::send_email(const std::string& from_user, const std::string& to_user, const std::string& subject, const std::string& body) 
{
    if(status_[from_user].active  &&  status_[to_user].active)
    {
        inboxes_[to_user].push_back({from_user,  subject, body, to_user,  false});
        sent_emails_count_[from_user]++;
        sent_emails_[from_user].push_back({from_user, subject, body,to_user , false});
        return true;
    }
    return false;
   
}

std::vector<Email> EmailSystem::query_inbox(const std::string& user) {
    return inboxes_[user]; 
}

std::unordered_map<std::string, int> EmailSystem::sent_emails_count() {
    return sent_emails_count_;
}

bool EmailSystem::flag_email(const std::string& user, const std::string& subject) {
    for (auto& email : inboxes_[user]) {
        if (email.subject == subject) {
            email.flagged = true;
            return true;
        }
    }
    return false;
}

bool EmailSystem::undo_send(const std::string& from_user, const std::string& subject) 
{
    for(auto it = sent_emails_[from_user].rbegin(); it != sent_emails_[from_user].rend(); ++it)
    {
        if(it -> subject == subject)
        {
            auto found = it->to_user;
            for(auto inbox_it = inboxes_[found].rbegin(); inbox_it != inboxes_[found].rend(); ++inbox_it)
            {
                if(inbox_it -> subject == subject)
                {
                   inboxes_[found].erase((inbox_it + 1).base()); 
                   sent_emails_[from_user].erase((it + 1).base()); 
                    sent_emails_count_[from_user]--;
                    return true;
                }
                
            }
        }
        
    }
    return false;
}

bool EmailSystem::logout_user(const std::string& user) 
{
   status_[user].active = false;
    return true;
}