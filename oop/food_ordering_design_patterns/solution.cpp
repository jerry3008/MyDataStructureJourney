#include "FoodDelivery.hpp"
#include "FoodDeliveryAdapter.hpp"
#include "MenuComposite.hpp"
#include "MenuDecorator.hpp"
#include "MenuItem.hpp"

int main() {
    // TODO: Implement the main function as described with the creation of instances and method calls
    
    UberEats* uber = new UberEats();
    UberEatsAdapter* ubadapter = new UberEatsAdapter(uber);
    ubadapter -> processOrder("$70.00");
    
    MenuComponent* menu = new MenuItem("burger", 60);
    
    
    
    MenuComponent* bread = new MenuItem("Bread", 40.0);
    MenuComponent* beans = new MenuItem("Beans", 20.0);
    
    MealCombo* combo = new MealCombo();
    combo->add(bread);
    combo->add(beans);
    
    std::cout << "Total Price: $" << combo->price() << std::endl;
    combo -> showDetails();
    
     delete ubadapter;
    delete combo;
    delete menu;
    return 0;
}