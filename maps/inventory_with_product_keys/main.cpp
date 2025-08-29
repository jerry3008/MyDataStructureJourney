#include "solution.hpp"
#include <map>

class Product
{
    public:
    Product(int id, std::string name);
    int id;
    std::string name;
};
Product::Product(int id, std::string name) : id(id), name(name) {}
struct custom_operator
{
    bool operator()(const Product&a, const Product&b)const
    {
        return(a.id < b.id) || (a.id == b.id  && a.name < b.name);
    }
};
void display(const std::map<Product, int, custom_operator>& inventory, int id)
{
    for(const auto & elem : inventory)
    {
        if (elem.first.id >= id)
        {
            std::cout<<elem.first.id <<" "<< elem.first.name<< " of this quantity "<< elem.second<< " Remains."<<std::endl;
            return;
        }
    }
};

// TODO: Define a Product class with attributes id (integer) and name (string). 
// Implement operator< for sorting by id.

int main() {
    // TODO: Create an instance of std::map named inventory.
    std::map<Product, int, custom_operator>inventory;
    Product Product0(11, "Rice");
    Product Product2(12, "Beans");
    Product Product1(21, "Rice");
    Product Product3(11, "Fish");
    Product Product4(13, "Snail");
    Product Product5(16, "Fish");

    inventory[Product0] = 1;
    inventory[Product1] = 2;
    inventory[Product2] = 5;
    inventory[Product3] = 20;
    inventory[Product4] = 5;
    inventory[Product5] = 8;
    
    
    
    display(inventory, 11);
    // TODO: Add some Product objects to inventory with different ids and names,
    // associating each Product with an integer stock quantity.

    // TODO: Implement and use a function to find the first Product object with 
    // an id not less than a specified value, then print it without removing.

    return 0;
}