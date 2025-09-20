#include "main.hpp"

// TODO: Implement the generate_power method for AuxiliaryPowerUnit.
void AuxiliaryPowerUnit::generate_power()
{
    std::cout<<"Auxiliary Power Unit is generating power for systems"<<std::endl;
}
// This method should output a message indicating the auxiliary power unit is generating power.

void LightingSystem::illuminate()
{
    std::cout<<"lighting system is now active"<<std::endl;
}
// TODO: Implement the illuminate method for LightingSystem.
// This method should output a message indicating that the lighting system is now active.

void Avionics::navigation_systems_check()
{
    std::cout<<"The avionics are performing navigation systems check"<<std::endl;
}
// TODO: Implement the navigation_systems_check method for Avionics.
// This method should output a message indicating that the avionics are performing navigation systems check.

// TODO: Implement the Aircraft constructor.
Aircraft::Aircraft() : auxiliaryPowerUnit(), lightingSystem(), avionics() {}

void Aircraft::prepare_for_takeoff()
{
    auxiliaryPowerUnit.generate_power();
    lightingSystem.illuminate();
    avionics.navigation_systems_check();
}

// TODO: Implement the prepare_for_takeoff method for Aircraft.
// This method should invoke the generate_power, illuminate, and navigation_systems_check methods of the respective components.

int main() {
    Aircraft my_jet;
    my_jet.prepare_for_takeoff();
    return 0;
}