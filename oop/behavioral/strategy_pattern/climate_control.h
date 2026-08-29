#include <iostream>

// TODO: Define the ClimateControl abstract base class with a virtual destructor and a pure virtual method adjustTemperature

// TODO: Define the Heating class inheriting from ClimateControl and implement the adjustTemperature method that takes an integer temperature and prints "Heating the room to <temperature> degrees."

// TODO: Define the Cooling class inheriting from ClimateControl and implement the adjustTemperature method that takes an integer temperature and prints "Cooling the room to <temperature> degrees."

class ClimateControl
{
  public:
  virtual void adjustTemperature(int temperature) = 0;
  virtual ~ClimateControl() = default;
    
};


class Heating : public ClimateControl
{
    public:
    virtual void adjustTemperature(int temperature)override
    {
        std::cout<< "Heating the room to "<<temperature << " degrees"<<std::endl;
    }
};

class Cooling : public ClimateControl
{
    public:
    virtual void adjustTemperature(int temperature) override
    {
        std::cout<< "Cooling the room to "<<temperature << " degrees"<<std::endl;
    }
};
