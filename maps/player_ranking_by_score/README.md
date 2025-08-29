Player Ranking Map (Custom Comparator)
Task

Create a Player class usable as a key in std::map (ordered by a custom comparator).
Order players by score descending, and if scores tie, by name ascending.
Initialize the map with:

"Amy", score 87 → "1st Place"

"Brad", score 75 → "2nd Place"

"Charlie", score 73 → "3rd Place"

Requirements

Define struct Player { std::string name; int score; };

Implement a comparator functor struct PlayerCmp that sorts:

higher score first,

for equal scores, lexicographically smaller name first.

Use std::map<Player, std::string, PlayerCmp> and insert the three entries above.