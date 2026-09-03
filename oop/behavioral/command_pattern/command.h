// TODO: Create an abstract class Command
//       - Add a virtual method execute() with no implementation
//       - Add a virtual destructor
#include "device.h"
#ifndef COMMAND_H
class Command
{
    public:
    virtual  void execute() = 0;
    
    virtual ~Command() = default;
    
};
// TODO: Create TurnOnCommand class that inherits from Command
//       - Add a constructor that takes a Device pointer and stores it in a member variable
//       - Override the execute() method to call turnOn() on the Device

class TurnOnCommand  : public Command
{
    Device* dv;
    public:
    TurnOnCommand(Device* dv) : dv(dv){}
    virtual void execute()override
    {
       dv -> turnOn();
    }
};
// TODO: Create TurnOffCommand class that inherits from Command
//       - Add a constructor that takes a Device pointer and stores it in a member variable
//       - Override the execute() method to call turnOff() on the Device

class TurnOffCommand  : public Command
{
    Device* dvoff;
    public:
    TurnOffCommand(Device* dvo) : dvoff(dvo){}
    virtual void execute()override
    {
       dvoff -> turnOff();
    }
};
// TODO: Create a RemoteControl class
//       - Add a private member variable to store a Command pointer
//       - Add a method setCommand(Command* command) to set the Command
//       - Add a method pressButton() to call execute() on the stored Command
class RemoteControl
{
    Command* cmd;
    Device* dvoff;
    public:
    void setCommand(Command* command)
    {
        cmd = command;
    }
   void pressButton()
    {
        cmd -> execute();
    }
};

#endif