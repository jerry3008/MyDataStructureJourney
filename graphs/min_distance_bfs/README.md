# Shortest Distance Between Cities using BFS

## Problem

You are provided with a representation of a network of cities and roads between them. Each city is represented by a unique integer ID, and the graph is given as an adjacency list.

Your task is to implement a function `minDistance()` that finds the shortest path from a given `start` city to a `destination` city using **Breadth-First Search (BFS)**.

If there is no path from `start` to `destination`, return -1.

## Example

### Input:
- Graph:
1
 \
  2
 / \
3   5
 \ /
  4

- `start = 3`, `destination = 5`

### Output:
2

### Explanation:
Possible paths from 3 to 5:
- `3 → 4 → 5`
- `3 → 2 → 5`

Both have a length of 2, so the minimum distance is `2`.

## Constraints:
- The graph is unweighted and undirected.
- Nodes are uniquely identified by integer IDs.
- The solution must use Breadth-First Search (BFS).