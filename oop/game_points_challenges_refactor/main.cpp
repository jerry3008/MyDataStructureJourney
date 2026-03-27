#include "solution.hpp"
#include <vector>

int Puzzle::calculatePoints(int playerLevel) {
    return std::max(0, playerLevel - difficulty_);
}

int Battle::calculatePoints(int playerLevel) {
    if (playerLevel > enemyPower_) {
        return playerLevel - enemyPower_;
    }
    return 0;
}


int calculateTotalPoints(Player& player, std::vector<std::unique_ptr<Challenge>>& challenges) {
    int totalPoints = 0;
    for (const auto& challenge : challenges)
    {
        totalPoints += challenge->calculatePoints(player.getPlayer());
    }
    
    return totalPoints;
}

int main() 
{
    Player  p(75);
    std::vector<std::unique_ptr<Challenge>> challenges;
    challenges.push_back(std::make_unique<Puzzle>(50));
    challenges.push_back(std::make_unique<Battle>(70));
    challenges.push_back(std::make_unique<Battle>(60));
    challenges.push_back(std::make_unique<Puzzle>(80));

    int adventurePoints = calculateTotalPoints(p, challenges);
    std::cout << "Total Points Earned: " << adventurePoints << std::endl;

    return 0;
}