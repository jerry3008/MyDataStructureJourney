#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// TODO: Refactor this code to use classes and apply OOP concepts.

class User
{
    std::string username_;  
    std::string password_;
    
    public:
    User(const std::string &username,  const std::string &password): username_(username), password_(password){};
    void displayUserInfo() const
    {
        std::cout << "Username: " << username_ << std::endl;
    }
    void updatePassword(const std::string &password)
    {
        password_ = password;
    }
    std::string getUsername() const 
    {
        return username_;
    }
};

class Events
{
    std::string event_;
    
    public:
    Events(const std::string &event): event_(event){};
    
   void logEvent(const std::string &event)
    {
        std::cout << "Event: " << event << std::endl;
    }
    
};

class AccountManager
{
    std::vector<User> users_;
    Events logger_;
    public:
    AccountManager() : logger_("") {}
    
    
    void addUser(const std::string& username, const std::string& password) {
        users_.emplace_back(username, password);
        logger_.logEvent("New user added: " + username);
    }
    
    void removeUser(const std::string &username)
    {
        auto it = std::remove_if(users_.begin(), users_.end(),
        [&](const User& user) 
        {
            return user.getUsername() == username;
        });
        users_.erase(it, users_.end());
        logger_.logEvent("User removed: " + username);
    }
    
    void displayUserInfo(const std::string & username)
    {
        for(const auto & user : users_)
        {
            if(user.getUsername() == username)
            {
                user.displayUserInfo();
                return;
            }
        }
        std::cout << "User " << username << " not found" << std::endl;
    }
    
};
#endif  // SOLUTION_HPP_