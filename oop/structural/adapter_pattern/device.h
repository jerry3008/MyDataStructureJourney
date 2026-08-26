// TODO: Define the abstract class Device with pure virtual functions turnOn() and turnOff().
// TODO: Define the class Light that inherits from Device and overrides turnOn() and turnOff().
// TODO: Define the class Fan that inherits from Device and overrides turnOn() and turnOff().
// TODO: Add a method setSpeed() to the Fan class with private variable speed
#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
class Device
{
    public:
    
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    
    
    virtual ~Device() = default;
};

class Light : public Device
{
    public:
  
  virtual void turnOn() override
  {
    std::cout<<"Lights are on"<<std::endl;
  }  
   virtual void turnOff() override
  {
    std::cout<<"Lights are off"<<std::endl;
  }
};

class Fan : public Device
{
    int speed;
  
  public:
  virtual void turnOn() override
  {
    std::cout<<"Fan are on"<<std::endl;
  }  
   virtual void turnOff() override
  {
    std::cout<<"Fan are off"<<std::endl;
  }
  
  void setSpeed(int speed)
  {
     this ->speed = speed;
  }
};
#endif