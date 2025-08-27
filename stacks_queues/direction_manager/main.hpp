#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <vector>
#include <string>
#include <optional>
#include <iostream>
#include <utility>

class DirectionManager {
public:
    DirectionManager() : currentPosition({0, 0}), historyStack({{0, 0}}) {}

    std::pair<int, int> move(const std::string& direction);

    std::optional<std::pair<int, int>> undoMove();

    std::optional<std::pair<int, int>> redoMove();

    std::vector<std::pair<int, int>> getPath() const;

private:
    std::pair<int, int> currentPosition;
    std::vector<std::pair<int, int>> historyStack;
    std::vector<std::pair<int, int>> redoStack;
};
#endif