#ifndef MENU_COMPOSITE_HPP
#define MENU_COMPOSITE_HPP

#include "MenuItem.hpp"
#include <pstl/glue_algorithm_defs.h>
#include <vector>
#include <algorithm>

// TODO: Implement MealCombo class inheriting from MenuComponent with a vector of MenuComponent*

// TODO: Implement add, remove, showDetails, and price methods in MealCombo class
class MealCombo : public MenuComponent
{
  std::vector<MenuComponent*> MC;
 public:
 void add(MenuComponent* item)
 {
   MC.push_back(item);
 } 
  
  void remove(MenuComponent* item)
  {
      MC.erase(std::remove(MC.begin(), MC.end(), item), MC.end());
  }
  
  void showDetails()
 {
   for(const auto itm : MC)
   {
      itm ->showDetails();
   }
 } 
 
 double price()
 {
    double total = 0.0;
    for(const auto itm : MC)
    {
      total += itm ->price();
    }
    
    return total;
 }
};

#endif // MENU_COMPOSITE_HPP