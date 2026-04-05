# Notification Service with Polymorphism (C++)

This task enhances an existing notification system by extending support beyond email notifications to include SMS and Push Notifications while preserving the original behavior.

The goal is to use polymorphism to build a flexible and extensible notification architecture.

## Objective

Enhance the `NotificationService` so it can send different types of notifications:

- Email
- SMS
- Push Notification

while keeping the original usage of:


sendNotification(const std::string& message, const std::string& recipient)

fully functional and backward compatible.

Existing Behavior

The current implementation supports only email notifications through an internal EmailNotification object.

Example output:

Sending email to user@example.com: Hello!

This behavior must remain unchanged for existing clients.

New Requirements

The system should support multiple notification types by accepting different notification instances, such as:

EmailNotification
SMSNotification
PushNotification

Each type should implement its own way of sending the notification while exposing a consistent interface.

Design Focus

This task emphasizes:

Polymorphism
Backward compatibility
Extensibility
Decoupling the service from specific notification types

A flexible design should allow the NotificationService to work with any notification type that follows the expected interface.

Expected Outcome

After implementation, the system should:

Continue supporting the existing email-based usage unchanged
Support additional notification types such as SMS and Push
Use polymorphism to avoid tightly coupling the service to one notification class
Allow easy future expansion to additional notification channels
Key Concepts
Polymorphism
Interface-based design
Backward compatibility
Dependency decoupling
Extensible object-oriented architecture
Build and Run
g++ -std=c++17 oop/notification_service_polymorphism/main.cpp -o notification_service
./notification_service
Notes
This task belongs under OOP.
Do not break the original email notification behavior.
Focus on making the notification system adaptable and easy to extend.
A common interface or base class is the recommended direction for clean polymorphic design.