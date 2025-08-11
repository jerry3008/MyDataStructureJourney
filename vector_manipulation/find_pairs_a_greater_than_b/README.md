Find Pairs Where a > b from Two Vectors
Task
Write a function that, given two integer vectors vectorA and vectorB of equal size n (1 ≤ n ≤ 500), returns all unique pairs {a, b} such that:

a is from vectorA

b is from vectorB

a > b

The order of the output pairs must follow the order of elements in vectorA.
If no such pair exists, return an empty vector.

Constraints
1 ≤ n ≤ 500

Element values: -1000 ≤ a, b ≤ 1000

Output pairs {a, b} should not repeat.

Example
Input:
vectorA = {5, 1, 8, -2, 0}
vectorB = {3, 2, 7, 10, -1}

Output:
{{5, 3}, {5, 2}, {5, -1}, {1, -1}, {8, 3}, {8, 2}, {8, 7}, {8, -1}, {0, -1}}

Explanation:

From a = 5: b's that are smaller: 3, 2, -1 → {5, 3}, {5, 2}, {5, -1}

From a = 1: only -1 → {1, -1}

From a = 8: 3, 2, 7, -1 → {8, 3}, {8, 2}, {8, 7}, {8, -1}

From a = -2: no matches

From a = 0: only -1 → {0, -1}