Move-Until-Obstacle Gameboard Transform
Task
Given an integer array (length ≤ 500, values in [-100, 100]), transform it as follows:

If an element is negative (an obstacle), replace it with -1.

If an element is positive (1..100), look to its right up to that many positions.

If there exists any negative value (obstacle) within that range, replace the element with the index of the first obstacle encountered in that range.

If no obstacle is within range, keep the original number.

Constraints
1 ≤ n ≤ 500

Values in array: -100 .. 100

Positive values (1..100) represent max step distance; negatives represent obstacles.

Example
Input:
[3, 2, -3, 1, 2]
Output:
[2, 2, -1, 1, 2]
Explanation:

3 at index 0 can reach index 2, which is an obstacle → replace with 2.

2 at index 1 can reach index 2, obstacle → replace with 2.

-3 at index 2 is obstacle → -1.

1 at index 3: range to index 4; no obstacle → keep 1.

2 at index 4: no further indices → keep 2.