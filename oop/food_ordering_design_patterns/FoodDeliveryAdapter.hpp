#ifndef FOOD_DELIVERY_ADAPTER_HPP
#define FOOD_DELIVERY_ADAPTER_HPP

#include "FoodDelivery.hpp"

// TODO: Create UberEatsAdapter, DoorDashAdapter, and GrubHubAdapter classes inheriting from FoodDeliveryPlatform, using Adapter pattern

class UberEatsAdapter : public FoodDeliveryPlatform
{
    UberEats* UE;
    public:
    UberEatsAdapter(UberEats* ubb) : UE(ubb){}
    
    void processOrder(const std::string& order) override
    {
        UE ->placeOrder(order);
    }
    
};
class DoorDashAdapter : public FoodDeliveryPlatform
{
    DoorDash* DD;
    public:
    DoorDashAdapter(DoorDash* ddsh) : DD(ddsh){}
    
    void processOrder(const std::string& order)override
    {
        DD -> submitOrder(order);
    }
    
};
class GrubHubAdapter : public FoodDeliveryPlatform
{
    GrubHub* GH;
    public:
    GrubHubAdapter(GrubHub* ghub) : GH(ghub){}
    
    void processOrder(const std::string& order) override
    {
        GH -> inlineorder(order);
    }
};

#endif // FOOD_DELIVERY_ADAPTER_HPP