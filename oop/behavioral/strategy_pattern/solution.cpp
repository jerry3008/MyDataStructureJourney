#include "climate_controller.h"

int main() {
    // TODO: Create a ClimateController object
    ClimateController* climatecom = new ClimateController();
    // TODO: Create Heating and Cooling strategy objects
    Heating* Hting = new Heating();
    Cooling* Cling = new Cooling();
    climatecom ->setClimateControl(Hting);
    climatecom->adjustTemperature(70);
    
    
    climatecom ->setClimateControl(Cling);
    climatecom->adjustTemperature(65);
    
    
    delete climatecom;
    
    // TODO: Set the strategy to heating and set the temperature to 70

    // TODO: Set the strategy to cooling and set the temperature to 65
 
    return 0;
}