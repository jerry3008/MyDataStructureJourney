#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H
#include "device.h"
// TODO: Include device.h

// TODO: Define the abstract DeviceFactory class with a pure virtual createDevice function
class DeviceFactory
{
    
    
    public:
    virtual Device* createDevice()  = 0;
    
    ~DeviceFactory()= default;
    
};
// TODO: Define the LightFactory and FanFactory classes inheriting from DeviceFactory and implement the createDevice function


class LightFactory : public DeviceFactory
{
    Device* d;
    public:
    virtual Device* createDevice() override
    {
         std::cout <<"creating a  light device "<<std::endl;
        return new Light();
       
    }
};

class FanFactory : public DeviceFactory
{
    public:
    virtual Device* createDevice() override
    {
        std::cout<<"creating a Fan  device "<<std::endl;
        return new Fan();
    }
    
};

#endif // DEVICE_FACTORY_H