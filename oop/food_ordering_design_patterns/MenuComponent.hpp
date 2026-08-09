#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <iostream>
#include <string>

// TODO: Define a MenuComponent interface class with showDetails and price methods

// TODO: Implement MenuItem class inheriting from MenuComponent with name and price attributes

class MenuComponent
{
    public:
    virtual void showDetails() = 0;
    virtual double  price() = 0;
    
    virtual ~MenuComponent() = default;

};


class MenuItem : public MenuComponent
{
  
  std::string name;
  double itemPrice;
  
  public:
  MenuItem(const std::string& n, double p) : name(n) , itemPrice (p)
  {}
  
  void showDetails() override
  {
    std::cout<<"The item "<<name<<" and the price: "<< itemPrice<< std::endl;
  }
  
  double price() override
  {
    return itemPrice;
  }
    
};
#endif // MENU_ITEM_HPP