#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>

// Abstract class for HomeAppliance
class HomeAppliance 
{
public:
    virtual void power_on() const = 0; // Pure virtual function
};

// Derived class Refrigerator
class Refrigerator : public HomeAppliance 
{
public:
    void power_on() const override;
};

// Derived class Oven
class Oven : public HomeAppliance 
{
public:
    void power_on() const override;
};

#endif  