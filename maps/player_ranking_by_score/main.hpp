#include <string>
#include <map>
#include <iostream>

class Player {
public:
    Player(std::string n, int s) : name(n), score(s) {}
    std::string name;
    int score;
};

struct PlayerCompare {
    bool operator()(const Player& a, const Player& b) const;
};

#endif