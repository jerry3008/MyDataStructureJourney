#include "main.hpp"
#include <vector>

// TODO: Implement identify method for Pentagon 
// It should return "I am a Pentagon with 5 sides."


// TODO: Implement identify method for Hexagon 
// It should return "I am a Hexagon with 6 sides."

int main() {
    std::vector<GraphicShape*> Pent;
    Pent.push_back(new Pentagon());
    Pent.push_back(new Hexagon());
    
    for (const auto* elem : Pent) 
    {
        std::cout << elem->identify() << std::endl;
    }
    // TODO: Create a vector of GraphicShape pointers containing instances of Pentagon and Hexagon
    // TODO: Use a loop to iterate over each shape in the vector and print its identify method's return value

    return 0;
}