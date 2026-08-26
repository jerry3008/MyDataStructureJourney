// TODO: Define the abstract class DeviceFactory with pure virtual function createDevice().
// TODO: Define the class LightFactory that inherits from DeviceFactory and overrides createDevice().
// TODO: Define the class FanFactory that inherits from DeviceFactory and overrides createDevice().
#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H
#include "device.h"
class DeviceFactory
{
  public:
  virtual Device*  createDevice() = 0;
  virtual ~DeviceFactory() = default;  
};


class LightFactory : public DeviceFactory
{
    
  public:
  virtual Device* createDevice() override
  {
    std::cout<<"Creating a new light "<<std::endl;
    return new Light();
  }
    
};


class FanFactory : public DeviceFactory
{
    
  public:
  virtual Device* createDevice() override
  {
    std::cout<<"Creating a new Fan "<<std::endl;
    return new Fan();
  }
    
};

#endif