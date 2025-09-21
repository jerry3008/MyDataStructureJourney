#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

// TODO: Define an abstract class LightSource with an abstract method turn_on()
class LightSource
{
    public:
        virtual std::string turn_on()const = 0;
};

class Lamp:public LightSource
{
    public:
        std::string turn_on()const override
        {
            return "Lamp is switched on";
        }
    
};
// TODO: Define a class Lamp derived from LightSource

#endif  