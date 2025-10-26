Smart Grid Energy Usage – Powers of k

You are monitoring energy usage in a smart grid system and need to identify specific data patterns in the readings.

Given an array of integers readings representing the energy readings over a period and an integer k, count the readings that are powers of k.

In this context, a power of k refers to numbers that can be expressed as k raised to an integer power (e.g., k⁰, k¹, k², etc.).

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(readings.length²) will fit within the execution time limit.

Example
Example 1
readings = [2, 4, 7, 8, 16, 32, 120]
k = 2


Output:
5

Explanation:
The numbers in the readings list that are powers of 2 are 2 (2¹), 4 (2²), 8 (2³), 16 (2⁴), and 32 (2⁵).
There are 5 such numbers.

Example 2
readings = [10201, 101, 1030301, 101, 101]
k = 101

Output:
5
Explanation:
The numbers in the readings list that are powers of 101 are 101 (101¹), 10201 (101²), and 1030301 (101³).
There are 5 such numbers.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.integer readings

An array of integers representing the energy readings over a period.

Guaranteed constraints:

1 ≤ readings.length ≤ 1000  
2 ≤ readings[i] ≤ 10⁹

[input] integer k

An integer representing the base of the power to check against the readings.

Guaranteed constraints:

2 ≤ k ≤ 10⁹

[output] integer

The number of readings that are powers of k.