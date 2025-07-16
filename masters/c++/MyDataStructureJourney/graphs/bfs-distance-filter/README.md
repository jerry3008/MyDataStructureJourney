# Graph BFS Distance Filter

This C++ project implements a function `findVertices(graph, start, distance)` that returns a sorted list of all vertices in a graph which are at most a certain distance away from a given starting vertex. It uses Breadth-First Search (BFS) for traversal and filtering.

## Problem Statement

Given an undirected graph (represented as an adjacency list), a start vertex, and a maximum distance, find all nodes that are reachable from the start node with a distance less than or equal to the given limit. Return the nodes sorted in ascending order.

### Example

    1
   / \
  2   3
 / \
4   5
     \
      6


Input:
- `start = 1`
- `distance = 2`

Output:
{1, 2, 3, 4, 5}



## Time Complexity

- Time Complexity: **O(n + m)**, where `n` is number of vertices and `m` is number of edges.
- Space Complexity: **O(n)** for visited tracking and result storage.

## Techniques Used

- Breadth-First Search (BFS)
- Queue
- HashSet (unordered_set)
- Sorting