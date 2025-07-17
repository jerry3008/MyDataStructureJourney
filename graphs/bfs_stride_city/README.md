# BFS with Stride Avoiding Obstacles
# BFS Stride with Obstacles

This project contains a C++ implementation of a Breadth-First Search (BFS) algorithm to find the minimum number of strides needed to travel from point `0` to `distance - 1`, given stride length constraints and obstacle positions.

## Problem Statement

You are given:
- A `distance` to travel
- A `stride_length` which is the maximum distance per step
- A list of `obstacles` (unreachable positions)

Find the minimal number of strides to reach the end using BFS. If no valid path exists, return -1.

### Example

```plaintext
stride_length = 11
obstacles = {4, 7, 9}
distance = 11

Output:
4
