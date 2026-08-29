#include "climate_control.h"

// TODO: Define the ClimateController class with a setClimateControl method that takes a ClimateControl pointer and an adjustTemperature method that takes an integer temperature and calls the adjustTemperature method of the ClimateControl object if set, otherwise prints "Climate control not set!"
// Remember to properly clean up the dynamically allocated ClimateControl object in the destructor

class ClimateController
{
    
    ClimateControl* clicon = nullptr;
    public:
    void setClimateControl( ClimateControl* climcontrol)
    {
        if (clicon) {
            delete clicon;
        }
        clicon = climcontrol;
    }
    void adjustTemperature(int nu)
    {
        if(clicon != nullptr)
        {
            clicon ->adjustTemperature(nu);
        }else {
            std::cout<< "Climate control not set!"<<std::endl;
        }
        
    }
    virtual ~ClimateController()
    {
        delete clicon;
    };
};