#include "solution.hpp"

// Function to calculate the total adventure score
int calculateTotalAdventureScore(const Player& player, const std::vector<Challenge>& challenges)
{
    int totalScore = 0;
        for (const auto &challenge : challenges) 
        {
            if (player.getLevel() >= challenge.getChallengeLevel())
            {
                totalScore += player.getLevel() - challenge.getChallengeLevel();
            }else 
            {
                totalScore -= 1;  // Penalizing for challenges that are too hard
            }
            // Ensuring the total score doesn't go below zero
        }
        totalScore = std::max(totalScore, 0);
        return totalScore;
}

int main() {
    Player p("Jerry", 80);

    std::vector<Challenge> challenges = 
    {
        {"Cave of Shadows", 20},
        {"The Enchanted Forest", 15},
        {"Dark Abyss", 30}
    };

    int finalScore = calculateTotalAdventureScore(p, challenges);
    std::cout << "Final Adventure Score for " << p.getName() 
              << ": " << finalScore << std::endl;

    return 0;
} 