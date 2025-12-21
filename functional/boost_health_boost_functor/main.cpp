#include <iostream>
#include <vector>
#include <functional>
#include <boost/range/adaptor/transformed.hpp>
#include <boost/range/algorithm/for_each.hpp>

struct Character {
    std::string name;
    double health;
};

// TODO: define the HealthBoost functor

class HealthBoost
{
    public:
    HealthBoost(double healthincr) : m_HealthBoost(healthincr){}
    
    double operator()(const Character & chara)const 
    {
        return chara.health * m_HealthBoost; 
    }
    
    private:
    double m_HealthBoost;
};


int main() 
{
    std::vector<Character> characters = { 
        {"Aragorn", 100},
        {"Legolas", 80},
        {"Gimli", 120},
        {"Frodo", 60},
        {"Gandalf", 150}
    };

    // TODO: initialize two instances of the HealthBoost
    HealthBoost HealthBoost_1(1.2);
    HealthBoost HealthBoost_2(1.5);
    // TODO: Apply the first health boost to all characters
   auto boosted = characters | boost::adaptors::transformed([&HealthBoost_1](const Character & chara)
   {
     return  Character{chara.name, HealthBoost_1(chara)};
    });
    // TODO: Print health points after the first boost
    boost::for_each(boosted, [&HealthBoost_2](const Character& c){
        std::cout << c.name << " now has: " << c.health << " health points\n";
        std::cout << c.name << " after second boost: " << HealthBoost_2(c) << " health points\n";
    });
    // TODO: Apply the second health boost to all characters

    // TODO: Print health points after the second boost

    return 0;
}