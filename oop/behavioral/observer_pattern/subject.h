// TODO: Define the Subject class with attach, detach, and notify methods
    // The attach method should add an observer to the list of observers
    // The detach method should remove an observer from the list of observers
    // The notify method should call the update method on all observers with a message as a parameter

// TODO: Define the SecuritySystem class that inherits from Subject and has a method detectIntrusion
    // The detectIntrusion method should call the notify method with the message "Intrusion detected!"
    
    #include <string>
#include <vector>
#include <algorithm>
    #include "observer.h"
class Subject
{
    observer* obs;
    
    public:
    
    std::vector<observer*>observers;
    public:
    void virtual attach(observer* obser)
    {
        observers.push_back(obser);
    }
    
    
    void detach(observer* obser)
    {
    
        observers.erase(std::remove(observers.begin(), observers.end(), obser), observers.end());
    
    }
    
    void notify(std::string message)
    {
        for(const auto& ob : observers)
        {
           ob->update(message);
        }
    }
    
    
};

class SecuritySystem : public Subject
{
    public:
    void detectIntrusion() {
    notify("Intrusion detected!");
}
};