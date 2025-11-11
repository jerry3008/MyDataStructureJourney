Imagine you are given a board of cells, each containing a bubble of a specific color (as shown below). Neighboring cells of the bubble are defined as adjacent cells (on either the same row or column as the given cell) which have a common side with the given cell. For example, the neighboring cells for each of the cells A, B, and C are highlighted in corresponding color in the picture below:

Your task is to perform a bubble explosion on the board. A bubble explosion is defined by the following rules:

A bubble within any given cell is eligible to explode if it has the same color as bubbles in at least 2 neighboring cells.

All eligible bubbles and bubbles of the same color in neighboring cells are marked for explosion.

All marked bubbles explode at the same time. Exploded bubbles are removed from the board, resulting in empty cells.

After all exploded bubbles are removed, remaining bubbles in cells above the empty cells drop down to fill all empty cells.

You are given an initial board of cells bubbles - a multidimensional array of integers representing cells containing bubbles of various colors. Return the board state after a bubble explosion. The output should be a multidimensional array of integers with the same size as bubbles, but replacing all empty cells (without bubbles) with 0.

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(bubbles.length² * bubbles[0].length²) will fit within the execution time limit.

Example

For

bubbles = [
  [3, 1, 2, 1],
  [1, 1, 1, 4],
  [3, 1, 2, 2],
  [3, 3, 3, 4]
]


the output should be

solution(bubbles) = [
  [0, 0, 0, 1],
  [0, 0, 0, 4],
  [0, 0, 2, 2],
  [3, 0, 2, 4]
]


Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.array.integer bubbles
A multidimensional array containing information about the lamps. Each lamp is described by a two-element array containing the coordinate and the effective radius of the lamp.
Guaranteed constraints:
1 ≤ bubbles.length ≤ 100
1 ≤ bubbles[0].length ≤ 100
1 ≤ bubbles[i][j] ≤ 10⁴