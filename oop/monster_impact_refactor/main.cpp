#include "solution.hpp"

int main() {
    // Player details
    player p("John", 120, 100, 5);
    std::vector<monster*> monsters{new orc(100), new dragon(150)};
    int totalImpact = 0;
    for (auto* m : monsters) 
    {
        totalImpact += m->calculateImpact(p);
    }
    // Details of monsters
    std::cout << "Total Combat Impact: " << totalImpact << std::endl;
    // Clean up memory!
    for (auto* m : monsters) delete m;
    return 0;
} 