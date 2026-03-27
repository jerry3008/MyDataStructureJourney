#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_
#include <memory>
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
class Player 
{
    int playerLevel_;
    public:
    Player(int playerLevel): playerLevel_(playerLevel){}
    
    int getPlayer() const 
    {
        return playerLevel_;
    }
};
class Challenge
{
    public:
    virtual int calculatePoints(int playerLevel) = 0;
    virtual ~Challenge() = default;
    
};
class Puzzle : public Challenge 
{
    int difficulty_;
    int calculatePoints(int playerLevel) override;
    public:
    Puzzle(int difficulty): difficulty_(difficulty){}
};
class Battle : public Challenge
{
    int enemyPower_;
    int calculatePoints(int playerLevel) override;
    public:
    Battle(int enemyPower): enemyPower_(enemyPower){}
    
};


int calculateTotalPoints(Player& player, std::vector<std::unique_ptr<Challenge>>& challenges);

#endif  // SOLUTION_HPP_