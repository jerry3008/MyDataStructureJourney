#include "solution.hpp"

bool PlayerCompare::operator()(const Player& a, const Player& b) const 
{
    return (a.score < b.score)||(a.score == b.score && a.name < b.name);
}

int main() {
    std::map<Player, std::string, PlayerCompare> tournamentData;
    Player play1("Amy", 87);
    Player play2("Brad", 75);
    Player play3("Charlie", 73);
    
    
    tournamentData[play1]="1st Place";
    tournamentData[play2]="2nd Place";
    tournamentData[play3]="3rd Place";
    
    for (const auto& entry : tournamentData) {
        std::cout << "Player: " << entry.first.name 
                  << ", Score: " << entry.first.score 
                  << ", Placement: " << entry.second << std::endl;
    }

    return 0;
}
