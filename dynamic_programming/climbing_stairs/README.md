Climbing Stairs — Count Distinct Ways
Task

You start at stair 0 and can climb either 1 or 2 stairs per move.
Implement totalWays(n) that returns the number of distinct ways to reach stair n.

This follows the Fibonacci pattern:

totalWays(0) = 1

totalWays(1) = 1

For n ≥ 2: totalWays(n) = totalWays(n-1) + totalWays(n-2)

Example

For n = 4, the output is 5:

1+1+1+1

1+1+2

1+2+1

2+1+1

2+2

Constraints

0 ≤ n (typical interviews take n up to ~1e5 for DP)

Use O(1) space iterative DP or memoized recursion.