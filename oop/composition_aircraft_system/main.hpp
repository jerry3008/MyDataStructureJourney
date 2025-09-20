#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>

class AuxiliaryPowerUnit
{
  public:
  void generate_power();  
};
// TODO: Define the AuxiliaryPowerUnit class with a method to generate power.

class LightingSystem
{
  public:
  void illuminate();
};
// TODO: Define the LightingSystem class with a method to activate the lighting system.

class Avionics
{
  public:
  void navigation_systems_check();
};

// TODO: Define the Avionics class with a method to check navigation systems.
class Aircraft
{
  private:
  AuxiliaryPowerUnit auxiliaryPowerUnit;
  LightingSystem lightingSystem;
  Avionics avionics;
  
  public:
  Aircraft();
  void prepare_for_takeoff();
  
  
};

// TODO: Define the Aircraft class containing the AuxiliaryPowerUnit, LightingSystem, and Avionics as components.
// Also declare the constructor and prepare_for_takeoff method.


#endif  // SOLUTION_HPP_