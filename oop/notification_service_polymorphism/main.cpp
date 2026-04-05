#include "solution.hpp"

// TODO: Implement EmailNotification, SMSNotification, and PushNotification classes 
// to support sending different types of notifications.

// Simulate sending an email by default
void EmailNotification::sendNotification(const std::string& message, const std::string&recipient)
{
    std::cout << "Sending  email  to " << recipient << ": " << message << std::endl;
}
void SMSNotification::sendNotification(const std::string& message, const std::string&recipient)
{
    std::cout << "Sending SMS to " << recipient << ": " << message << std::endl;
}
void PushNotification::sendNotification(const std::string& message, const std::string&recipient)
{
    std::cout << "Sending Push Notification to " << recipient << ": " << message << std::endl;
}
    


void NotificationService::sendNotification(const std::string& message, const std::string& recipient, INotification* notification) 
{
    if(notification != nullptr)
    {
       notification->sendNotification(message, recipient);
    }else {
        
        EmailNotification_.sendNotification(message, recipient);
    
    }
}

int main() {
    NotificationService notificationService;

    // Default email notification
    notificationService.sendNotification("Welcome to our service!", "user@example.com");

    // SMS notification
    SMSNotification smsNotification;
    notificationService.sendNotification("Your verification code is 123456", "1234567890", &smsNotification);

    // Push notification
    PushNotification pushNotification;
    notificationService.sendNotification("You have a new message", "device1234567890", &pushNotification);

    // Explicit email notification
    EmailNotification emailNotification;
    notificationService.sendNotification("We've updated our privacy policy.", "privacy@example.com", &emailNotification);

    return 0;
}