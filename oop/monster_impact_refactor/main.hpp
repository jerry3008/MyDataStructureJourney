 #ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <vector>
#include <iostream>
#include <string>


class player
{
    std::string playerName_;
    int playerPower_;
    int health_;
    int level_;
    public:
    player( const std::string& playerName, int playerPower, int health, int level) : playerName_(playerName), playerPower_(playerPower),health_(health), level_(level){}
    
    void display();
    int getPower()const{
        return playerPower_;
    }
    void setpower(int power)
    {
        playerPower_ = power;
    }
    
};

class monster{
    public:
    virtual int  calculateImpact(const player& p) =  0;
    virtual ~monster() = default;
};

class orc : public monster 
{
    int strength_;
    
    public:
    orc(int strength): strength_(strength){}
    int  calculateImpact(const player& p)  override
    {
        return(p.getPower() > strength_ ) ? (p.getPower() - strength_) : -(strength_ - p.getPower());
    }
};


class dragon : public monster 
{
    int strength_;
    
    public:
    dragon(int strength): strength_(strength){}
    int  calculateImpact(const player& p)  override
    {
        return(p.getPower() > strength_ ) ? (p.getPower() - strength_* 2) : -(strength_* 2 - p.getPower());
    }
};


#endif  // SOLUTION_HPP_