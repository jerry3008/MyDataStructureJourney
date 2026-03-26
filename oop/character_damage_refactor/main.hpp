#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <utility>

class Character
{
    std::string hero_name_;
    int hero_strength_;
    int hero_magic_ ;
    public:  
    Character( std::string hero_name, int hero_strength, int hero_magic) : hero_name_(hero_name) ,  hero_strength_(hero_strength) , hero_magic_(hero_magic){}
    
    int getStrength() const
    {
        return hero_strength_; 
    }
    
    int getMagic() const 
    {
        return hero_magic_; 
    }
    
    std::string getName() const
    {
        return hero_name_; 
    }
};

class Encounter 
{
    int enemy_strength_; 
    int magic_barrier_;
    public:
    Encounter(int enemy_strength, int magic_barrier): enemy_strength_(enemy_strength),  magic_barrier_(magic_barrier){}
    int calculateDamage(const Character& character)const
    {
       auto caraStrength =  character.getStrength(); 
        auto caramagic = character.getMagic();
        int physical_damage = caraStrength - enemy_strength_;
        int magical_damage = caramagic - magic_barrier_;
        if (physical_damage > 0 && magical_damage > 0) 
        { 
            return physical_damage + magical_damage; 
        } else 
        {
            return 0; 
        }
    }
   
    
};
int adventureJourney(const Character& character, const std::vector<Encounter>& encounters)
{
    int total_damage = 0;
    for(const auto& Encounter_0 : encounters)
    {
        total_damage += Encounter_0.calculateDamage(character);
    }
    return total_damage;
}



#endif  // SOLUTION_HPP_