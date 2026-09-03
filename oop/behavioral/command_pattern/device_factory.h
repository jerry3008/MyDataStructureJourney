// TODO: Create an abstract class DeviceFactory
//       - Add a virtual method createDevice() with no implementation
//       - Add a virtual destructor

#include "device.h"
#ifndef DEVICEFACTORY_H
class DeviceFactory
{
    
    public:
    virtual Device*  createDevice() = 0;
    
    virtual  ~DeviceFactory() = default;
};


// TODO: Create LightFactory class that inherits from DeviceFactory
//       - Override the createDevice() method to return a new instance of Light

// TODO: Create FanFactory class that inherits from DeviceFactory
//       - Override the createDevice() method to return a new instance of Fan

class LightFactory  : public DeviceFactory
{
    public:
    virtual Device* createDevice()override
    {
       return new Light;
    }
};


class FanFactory  : public DeviceFactory
{
    int speed;
    
    public:
    virtual Device* createDevice()override
    {
       return new Fan;
    }
    
};
#endif