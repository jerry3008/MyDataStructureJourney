#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <iostream>
class user_profile
{
    std::string username_;
    std::string email_;
    public:
    user_profile(const std::string &username, const std::string &email): username_(username), email_(email){}
    void displayProfile() const 
    {
        std::cout << "User: " << username_ << ", Email: " << email_ << std::endl;
    }  
    
};

class authentication
{
    std::string passwordHash_;
    public:
    authentication(const std::string &passwordHash) : passwordHash_(passwordHash){}
    bool authenticate(const std::string &attemptedPasswordHash) const 
    {
        return passwordHash_ == attemptedPasswordHash;
    }
};


class settings
{
    
    std::string theme_;
    bool notificationsEnabled_;
    public:
    settings(const std::string &theme, bool notificationsEnabled) : theme_(theme), notificationsEnabled_(notificationsEnabled){}
    
    void updateTheme(const std::string &newTheme) 
    {
        theme_ = newTheme;
    }

    void toggleNotifications() 
    {
        notificationsEnabled_ = !notificationsEnabled_;
    }
    
    std::string  getTheme()const
    {
        return theme_;
    }
    
    bool getNotificationsEnabled()const
    {
        return notificationsEnabled_;
    }
    
};


class User {
public:
    User(const std::string &username, const std::string &email,const std::string &passwordHash, const std::string &theme, bool notificationsEnabled);
         
    
    // TODO: Consider transferring these responsibilities to separate classes
    void displayProfile() const;
    bool authenticate(const std::string &attemptedPasswordHash) const;
    void updateTheme(const std::string &newTheme);
    void toggleNotifications();
    void displayFullUserDetails() const;
    

private:
    // TODO: Identify which member variables belong to specific concerns like profile, authentication, and settings
    user_profile user_profile_;
    authentication authentication_;
    settings settings_;
};

#endif  // SOLUTION_HPP_