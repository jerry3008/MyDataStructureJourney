#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

// TODO: Define abstract base class INotification and derived classes EmailNotification, SMSNotification, PushNotification
class INotification
{
    public:
    virtual void sendNotification(const std::string& message, const std::string& recipient) = 0;
    virtual ~INotification() = default;
};
class EmailNotification : public INotification
{
    public:
    virtual void sendNotification(const std::string& message, const std::string& recipient)override;
    
};
class SMSNotification : public INotification
{
    public:
    virtual void sendNotification(const std::string& message, const std::string& recipient)override;
    
};
class PushNotification : public INotification
{
    public:
    virtual void sendNotification(const std::string& message, const std::string& recipient)override;
    
};

class NotificationService {
public:
    void sendNotification(const std::string& message, const std::string& recipient, INotification* notification = nullptr);
    
    
    private:
    EmailNotification EmailNotification_;
    
};

#endif  // SOLUTION_HPP_