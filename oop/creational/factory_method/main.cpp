// TODO: Include the necessary header files

#include "device_factory.h"
int main() {
    // TODO: Create an instance of LightFactory and use it to create a Light object
    // TODO: Turn on and off the Light object
    LightFactory* li = new LightFactory();
    auto mv = li->createDevice();
    mv -> turnOn();
    mv -> turnOff();

    // TODO: Create an instance of FanFactory and use it to create a Fan object
    // TODO: Turn on, set speed, and turn off the Fan object
    FanFactory* fn = new FanFactory();
    auto fnv = fn->createDevice();
    fnv -> turnOn();
    fnv -> turnOff();
    static_cast<Fan*>(fnv)->setSpeed(3);
    // TODO: Delete the pointers to clean up the memory
    
    
    delete li;
    delete fn;
    delete fnv;
    delete mv;
    return 0;
}