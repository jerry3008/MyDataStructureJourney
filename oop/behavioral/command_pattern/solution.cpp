// TODO: Write main function
//       - Create instances of factories: LightFactory and FanFactory
//       - Use factories to create instances of Light and Fan
//       - Create instances of TurnOnCommand and TurnOffCommand for Light and Fan devices
//       - Create an instance of RemoteControl
//       - Set commands on the RemoteControl and press the button to execute the commands
//       - Clean up any dynamically allocated memory

#include "device.h"
#include "deviceFactory.h" 
#include "command.h"


int main() {
    LightFactory* lf = new LightFactory;
    FanFactory * ff = new FanFactory;
    
    
  
    Device* lig = lf->createDevice();
    Device* fn  = ff->createDevice();
    TurnOnCommand* ton = new TurnOnCommand(lig);
    TurnOffCommand* toff = new TurnOffCommand(fn);
    
    
    RemoteControl* remote = new RemoteControl();
    remote->setCommand(ton);
    
    remote->pressButton();
    remote->setCommand(toff);
    remote->pressButton();
    
    TurnOffCommand* loff = new TurnOffCommand(lig);
    TurnOnCommand* onn = new TurnOffCommand(fn);
    delete lf;
    delete fn;
    delete ff;
    delete lig;
    delete ton;
    delete toff; 
    delete remote;
    delete loff;
    delete onn;
    return 0;
    
}
