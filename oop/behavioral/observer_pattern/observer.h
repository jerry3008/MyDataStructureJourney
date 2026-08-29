// TODO: Define the Observer class with a pure virtual method 'update' and a virtual destructor

// TODO: Define the HomeOwner class that inherits from Observer and implements the update method
    // The HomeOwner class should have a constructor that takes a string name as a parameter
    // The update method should take a message as a string and print a message in the format: "<name> received message: <message>"
 #ifndef OBSERVER_H
#define OBSERVER_H
    #include <string> 
    #include <iostream>
class observer
{
    
    public:
    void virtual update(std::string message) = 0;
    
    ~observer() = default;
};


class HomeOwner : public observer
{
    std::string HomeO;
    
    public:
    HomeOwner(std::string HO) :  HomeO(HO) {}
    
    void virtual update(std::string message) override
    {
        std::cout<<HomeO <<" received message: " << message<<std::endl;
    }
};

#endif   