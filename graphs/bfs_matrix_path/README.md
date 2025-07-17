# BFS Matrix Path Finder

This program finds the shortest path in an `n x m` binary matrix using Breadth-First Search (BFS), where `1` represents a passable cell and `0` represents an obstacle.

## Problem

Given a matrix:
- `1` = passable
- `0` = obstacle

You can move only up, down, left, or right (no diagonals). Return the minimum number of steps from `start` to `end` if a path exists, or `0` otherwise.

### Example:

**Input:**
```cpp
matrix = {
    {1, 1, 1},
    {0, 1, 0},
    {1, 1, 1}
};
start = {0, 0}
end = {2, 2}
