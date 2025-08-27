#include "main.hpp"

std::pair<int, int>  DirectionManager::move(const std::string& direction) 
{
    if (direction != "U" && direction != "D" && direction != "L" && direction != "R")
    { 
        std::cout << "error" << std::endl;
        return currentPosition; // Don't move if invalid
    }
   if(direction == "U")currentPosition.second += 1;
   else if(direction == "D")currentPosition.second -= 1;
   else if(direction == "L")currentPosition.first -= 1;
   else if(direction == "R")currentPosition.first += 1;
    historyStack.push_back(currentPosition);
    redoStack.clear();
    return currentPosition;
    
}

std::optional<std::pair<int, int>> DirectionManager::undoMove() 
{
   if(historyStack.size() < 1)return std::nullopt;
   auto recent = historyStack.back();
   historyStack.pop_back();
   redoStack.push_back(recent);
   currentPosition = historyStack.back();
   return currentPosition;
}

std::optional<std::pair<int, int>> DirectionManager::redoMove() 
{
   if(redoStack.size() < 1)return std::nullopt;
   auto recent = redoStack.back();
   redoStack.pop_back();
   historyStack.push_back(recent);
   currentPosition = historyStack.back();
   return currentPosition;
}

std::vector<std::pair<int, int>> DirectionManager::getPath() const 
{
   
    return historyStack;
}