Distribute Integers Between Two Arrays

Given an array of integers numbers, distribute all of its integers between two arrays, first and second, based on the following rules:

The first number, numbers[0], goes to the first array.

The second number, numbers[1], goes to the second array.

Each following number, numbers[i] where i > 1, goes to the array with the higher number of elements that are strictly greater than the numbers[i].

In case of a tie, numbers[i] goes to the array with the lower length.

If it is still a tie, numbers[i] goes to the first array.

Your task is to return a single array — the combination of first and second — by appending all elements of second to the end of first.

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than
O(numbers.length²) will fit within the execution time limit.

Example
Example 1
numbers = [5, 7, 6, 9, 2]


Output:

[5, 9, 2, 7, 6]


Explanation:

numbers[0] = 5 → goes to first, numbers[1] = 7 → goes to second.

At this point: first = [5], second = [7].

Considering numbers[2] = 6:

There are 0 elements in first greater than 6.

There is 1 element in second greater than 6.

Since 1 > 0, 6 goes to second.

Now: first = [5], second = [7, 6].

Considering numbers[3] = 9:

0 elements in both arrays are greater than 9.

It’s a tie — goes to the array with the lowest length → first.

Now: first = [5, 9], second = [7, 6].

Considering numbers[4] = 2:

2 elements in both first and second are greater than 2.

It’s a tie again — both arrays have equal length.

So 2 goes to the first array.

Now: first = [5, 9, 2], second = [7, 6].

Appending second to the end of first results in [5, 9, 2, 7, 6].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.integer numbers

An array of integers.

Guaranteed constraints:

2 ≤ numbers.length ≤ 10³
0 ≤ numbers[i] ≤ 10⁵

[output] array.integer

The result of appending second array to the end of the first array,
after splitting all integers from numbers based on the rules described above.