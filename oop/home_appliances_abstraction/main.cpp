#include "main.hpp"
#include <iostream>

// TODO: Implement the power_on method for the Refrigerator class to indicate it's cooling.

void  Refrigerator::power_on()  const
{
    std::cout << "Refrigerator is now on and cooling." << std::endl;
    
}



// TODO: Implement the power_on method for the Oven class to indicate it's heating.
void  Oven::power_on()  const
{
    std::cout << "Oven is now on and heating." << std::endl;
    
}


int main() {
    Refrigerator fridge;
    fridge.power_on();
    Oven cook;
    cook.power_on();
    
    return 0;
}