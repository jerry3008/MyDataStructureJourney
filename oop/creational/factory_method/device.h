#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>

#include <iostream>

// TODO: Define the abstract Device class with pure virtual functions turnOn and turnOff.
class Device
{
  public:
  virtual void turnOff() = 0;  
  virtual void turnOn() = 0;  
  
  virtual ~Device() = default;
};

class Light : public Device
{
  
  public:
   void turnOff() override
   {
        std::cout<<"Light is off."<<std::endl;
   }
   
   void turnOn() override
   {
     std::cout<<"Light is on."<<std::endl;
   }
    
};



class Fan : public Device
{
   int s;
   
  public:
   void turnOff() override
   {
        std::cout<<"Fan is off."<<std::endl;
   }
   
   void turnOn() override
   {
     std::cout<<"Fan is on."<<std::endl;
   }
   
   void setSpeed( int s)
   {
      this -> s = s;
      std::cout<<"Fan speed set to " << s << "."<<std::endl;
   };
    
};
// TODO: Define the Light class inheriting from Device and implement the turnOn and turnOff methods

// TODO: Define the Fan class inheriting from Device and implement the turnOn, turnOff, and setSpeed methods

#endif // DEVICE_H