// TODO: Define the abstract class USPlug with pure virtual function connect().
// TODO: Define the class DeviceAdapter that inherits from USPlug and implements connect(). It shoud print '[Adapted]' before calling the device's turnOn() method.
#ifndef US_PLUG_H
#define US_PLUG_H
#include "device.h"
class USPlug
{
    public:
    virtual void connect() = 0;
    virtual ~USPlug() = default;
};

class DeviceAdapter : public USPlug
{
  Device*dv;
  public:
  DeviceAdapter(Device* dv) : dv(dv){}
  virtual void connect() override
  {
    std::cout<<"[Adapted]"<<std::endl;
    dv -> turnOn();
  }  
};
#endif