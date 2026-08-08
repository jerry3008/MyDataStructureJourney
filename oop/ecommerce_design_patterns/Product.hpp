#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string>

// TODO: Define a ProductComponent interface class with a showDetails method
// TODO: Implement Product class inheriting from ProductComponent with name and price attributes
class ProductComponent
{
  public:
  virtual void showDetails() = 0;
   virtual ~ProductComponent() = default;
};

class Product : public ProductComponent
{
  std::string name;
  int price;
  
  public:
  Product(std::string name, int price): name(name), price(price){}
  void showDetails() override
  {
    std::cout << "Product: " << name << ", Price: $" << price << std::endl;
  }
  
};
#endif // PRODUCT_HPP