#ifndef FOOD_DELIVERY_HPP
#define FOOD_DELIVERY_HPP

#include <iostream>
#include <string>

// TODO: Define a FoodDeliveryPlatform interface class with a processOrder method

// TODO: Implement UberEats, DoorDash, and GrubHub classes with different order processing methods

class FoodDeliveryPlatform
{
  public:
  virtual void processOrder(const std::string& order) = 0;
   virtual ~FoodDeliveryPlatform() = default;
};

class UberEats
{
    public:
    void placeOrder (const std::string& order) 
    {
      std::cout <<"ordering from uber"<<std::endl;   
    };
    
};
class DoorDash 
{
    public:
    void submitOrder(const std::string& order)
    {
      std::cout <<"ordering from DoorDash "<<std::endl;   
    };
    
};
class GrubHub 
{
    public:
    void inlineorder(const std::string& order) 
    {
      std::cout <<"ordering from GrubHub "<<std::endl;   
    };  
}; 
#endif // FOOD_DELIVERY_HPP