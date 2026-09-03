// TODO: Create an abstract class Device
//       - Add virtual methods turnOn() and turnOff() with no implementation
//       - Add a virtual destructor
#include <iostream>
#ifndef DEVICE_H
#define DEVICE_H
class Device
{
    public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Device() = default;
};
// TODO: Create Light class that inherits from Device
//       - Override the turnOn() method to print "Light is on."
//       - Override the turnOff() method to print "Light is off."
class Light  : public Device
{
    public:
    virtual void turnOn()override
    {
        std::cout<<"Light is on."<<std::endl;
    }
    virtual void turnOff()override
    {
        std::cout<<"Light is off."<<std::endl;
    }
};
// TODO: Create Fan class that inherits from Device
//       - Add a private member variable for speed
//       - Override the turnOn() method to print "Fan is on."
//       - Override the turnOff() method to print "Fan is off."
//       - Add a public method setSpeed(int speed) to set the speed of the fan and print the speed

class Fan  : public Device
{
    int speed;
    
    public:
    virtual void turnOn()override
    {
        std::cout<<"Fan is on."<<std::endl;
    }
    virtual void turnOff()override
    {
        std::cout<<"Fan is off."<<std::endl;
    }
    
    void setSpeed(int speed)
    {
        this ->speed = speed;
        std::cout<<"Fan speed set to "<< speed <<'.'<< std::endl;
    }
};
#endif