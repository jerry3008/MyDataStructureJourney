#ifndef MENU_DECORATOR_HPP
#define MENU_DECORATOR_HPP

#include "MenuItem.hpp"

// TODO: Implement a MenuItemDecorator class inheriting from MenuComponent, using Decorator pattern

// TODO: Implement ChiliSauceDecorator and CheeseDecorator classes inheriting from MenuItemDecorator, adding specific behaviors

class MenuItemDecorator : public MenuComponent
{
    protected:
    MenuComponent* MC;
    
    public:
    MenuItemDecorator(MenuComponent* M): MC(M){}
    
    void showDetails()override
    {
        MC ->showDetails();
    }
    double price()override
    {
        return MC ->price();
    
    }
    
    
};


class ChiliSauceDecorator : public MenuItemDecorator
{
    public:
    ChiliSauceDecorator(MenuComponent* item) : MenuItemDecorator(item) {}
    double price() override
    {
        return MenuItemDecorator::price() + 1.0;
    }
  
  
  void showDetails() override 
    {
        MenuItemDecorator::showDetails();
        std::cout << " + ChiliSauce: $1.0" << std::endl;
    }
    
};

class CheeseDecorator : public MenuItemDecorator
{
  
  public:
  CheeseDecorator(MenuComponent* item) : MenuItemDecorator(item) {}
    
    double price() override
    {
        return MenuItemDecorator::price() + 1.0;
    }
    
    void showDetails() override 
    {
        MenuItemDecorator::showDetails();
        std::cout << " + Cheese: $1.0" << std::endl;
    }
};



#endif // MENU_DECORATOR_HPP