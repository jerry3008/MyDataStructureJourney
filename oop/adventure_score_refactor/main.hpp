#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


class Player
{
    std::string playerName_;
    int playerLevel_; 
    public:
    Player(const std::string& playerName, int playerLevel): playerName_(playerName), playerLevel_(playerLevel){}
    
    std::string getName()const
    {
        return playerName_;
        
    }
    int getLevel()const
    {
        return playerLevel_;
        
    }
    
};
class Challenge
{
    std::string challengeName_;
    int challengeLevel_;
     
    
    public:
    Challenge(const std::string& challengeName, int challengeLevel): challengeName_(challengeName), challengeLevel_(challengeLevel){}
    
    std::string getChallenge()const
    {
        return challengeName_;
        
    }
    int getChallengeLevel()const
    {
        return challengeLevel_;
        
    }
    
};


#endif  // SOLUTION_HPP_