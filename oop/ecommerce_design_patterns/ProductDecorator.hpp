#ifndef PRODUCTDECORATOR_HPP
#define PRODUCTDECORATOR_HPP

#include "Product.hpp"

// TODO: Implement a ProductFeature class inheriting from ProductComponent, using Decorator pattern
// TODO: Implement DiscountFeature and GiftWrapFeature classes inheriting from ProductFeature, adding specific behaviors

class ProductFeature : public ProductComponent
{
    protected:
    ProductComponent* product;
    
   public:
   ProductFeature(ProductComponent* p) : product(p) {}
   void showDetails() override
   {
        product->showDetails();
   }
};

class DiscountFeature : public ProductFeature
{
    double discount;
    public:
    DiscountFeature(ProductComponent* pc, double d): ProductFeature(pc), discount(d) {}
   
    void showDetails()override
    {
        ProductFeature::showDetails(); 

        std::cout<< discount<<std::endl; 
    }
};

 class GiftWrapFeature : public  ProductFeature
{
    
    public:
    GiftWrapFeature(ProductComponent* p): ProductFeature(p){}
    void showDetails()override
    {
        ProductFeature::showDetails(); 

        std::cout<< "This is your gift wrap message"<<std::endl; 
    }
    

};
#endif // PRODUCTDECORATOR_HPP