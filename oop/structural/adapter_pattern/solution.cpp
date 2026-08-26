#include "device_factory.h"
#include "us_plug.h"

int main() {
    // TODO: Create an instance of LightFactory and use it to create a Light device.
    // TODO: Create an instance of DeviceAdapter to adapt the Light device to the USPlug interface.
    // TODO: Connect the DeviceAdapter.
    
    LightFactory* Lt = new LightFactory();
    auto conn = Lt->createDevice();
    DeviceAdapter* DA = new DeviceAdapter(conn);
    DA->connect();
    

    // TODO: Create an instance of FanFactory and use it to create a Fan device.
    // TODO: Create an instance of DeviceAdapter to adapt the Fan device to the USPlug interface.
    // TODO: Connect the DeviceAdapter.
    
    
    FanFactory* FF = new FanFactory();
    auto connff = FF->createDevice();
    DeviceAdapter* DAF = new DeviceAdapter(connff);
    DAF->connect();

    // TODO: Delete all created objects to prevent memory leaks.

 
    delete Lt;
    delete DA;
    delete DAF;
    delete FF;
    delete conn;
     delete connff;
    return 0;
}