# Player Score Lookup

## Problem Statement

You are given:
- `player_ids`: a list of unique integers representing player IDs.
- `player_scores`: a list of integers representing each player's score.
- `queries`: a list of player IDs to be queried.

Each ID in `player_ids[i]` corresponds to a score in `player_scores[i]`.

Your task is to implement a function `solution` that returns a list of scores for the player IDs in the `queries` list.

If a queried player ID does not exist in `player_ids`, skip it.

---

## Function Signature

```cpp
std::vector<int> solution(const std::vector<int>& player_ids,
                          const std::vector<int>& player_scores,
                          const std::vector<int>& queries);
