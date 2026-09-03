# Command Pattern - Smart Home Automation

This exercise demonstrates the Command design pattern in C++ using a smart home automation system.

## Objective

The goal is to separate the object that requests an action from the object that actually performs that action.

The system controls smart-home devices such as:

- Light
- Fan

Commands are used to turn devices on and off through a remote control.

## Components

### Device

`Device` is the abstract receiver interface.

It defines:

- `turnOn()`
- `turnOff()`

### Light and Fan

`Light` and `Fan` are concrete devices that implement the `Device` interface.

### DeviceFactory

`DeviceFactory` defines the interface for creating devices.

Concrete factories include:

- `LightFactory`
- `FanFactory`

### Command

`Command` is the abstract command interface.

It defines:

- `execute()`

### TurnOnCommand

Stores a reference to a `Device`.

Calling `execute()` invokes:

`device.turnOn()`

### TurnOffCommand

Stores a reference to a `Device`.

Calling `execute()` invokes:

`device.turnOff()`

### RemoteControl

`RemoteControl` acts as the invoker.

It stores a command and executes it when `pressButton()` is called.

## Pattern Structure

```text
RemoteControl
     |
     | pressButton()
     v
   Command
   /     \
  /       \
TurnOn   TurnOff
Command  Command
   \       /
    \     /
     Device
     /   \
  Light   Fan
Concepts Practiced
Command design pattern
Behavioral design patterns
Abstract classes
Inheritance
Polymorphism
Composition
Encapsulating actions as objects
Factory Method
Smart pointers and object lifetime
Decoupling senders from receivers
Why This Pattern Is Useful

Without the Command Pattern, a remote control would need to know exactly how every device works.

With the Command Pattern, the remote only knows:

command->execute()

The command itself knows which device should perform the action.

This makes the system easier to extend with new commands such as:

DimLightCommand
IncreaseFanSpeedCommand
LockDoorCommand
SetTemperatureCommand

without redesigning the remote control.


For the mental model, remember this:

```text
RemoteControl = person pressing button
Command       = instruction
Device        = object that actually does the work

For example:

Remote
  ↓
TurnOnCommand
  ↓
Light
  ↓
turnOn()

The remote does not directly call:

light->turnOn();

Instead it says:

command->execute();

and the command decides what action happens.

After you're done: