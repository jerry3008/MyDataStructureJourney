# Knight Minimum Moves on 8x8 Chessboard

This program calculates the **minimum number of moves** it takes for a **chess knight** to go from a starting cell to an ending cell using Breadth-First Search (BFS).

## Problem Description

A knight moves in an "L" shape: two squares in one direction and then one square perpendicular to that direction.

You are given:
- `start = {x1, y1}`
- `end = {x2, y2}`

Both are 0-based coordinates in an 8×8 chessboard.

### Example

**Input:**
```cpp
start = {4, 4}
end = {6, 6}
Output: 4

Explanation:
The shortest path is:

{4, 4} → {6, 3}

{6, 3} → {4, 2}

{4, 2} → {5, 4}

{5, 4} → {6, 6}

Total: 4 moves

Constraints
8x8 board

Knight moves only in L-shape

Coordinates are 0-indexed

Expected time complexity: O(1) (constant max size)