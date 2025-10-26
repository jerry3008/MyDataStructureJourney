A spy agency has intercepted fragments of a secret code.

Each fragment is represented as a positive integer in an array called fragments.
Intelligence suggests that the complete access code is a specific number called accessCode.

Your mission is to determine how many different ways the fragments can be paired to form the complete access code.
The agency’s cryptography rules state that:

When fragments are combined, they are simply placed next to each other (not added mathematically).

Each specific pair of fragments (by position in the array) counts as a unique combination.

The fragments can be used in any order, but each fragment position can only be used once in a combination.

For example, if fragment "12" is followed by fragment "34", the result is "1234".

Example

For fragments = [1, 212, 12, 12] and accessCode = 1212, the output should be solution(fragments, accessCode) = 3.

We can form the access code 1212 by combining:

fragments[0] = 1 with fragments[1] = 212

fragments[2] = 12 with fragments[3] = 12

fragments[3] = 12 with fragments[2] = 12

Note that the last two combinations are considered different because they use different positions in the array.

For fragments = [11, 11, 110] and accessCode = 11011, the output should be solution(fragments, accessCode) = 2.

We can form the access code 11011 by combining:

fragments[2] = 110 with fragments[0] = 11

fragments[2] = 110 with fragments[1] = 11

Note that fragments do not need to be adjacent in the original array to be combined.

For fragments = [777, 7, 777, 77, 77] and accessCode = 7777, the output should be solution(fragments, accessCode) = 6.

We can form the access code 7777 by combining:

fragments[0] = 777 with fragments[1] = 7

fragments[1] = 7 with fragments[0] = 777

fragments[1] = 7 with fragments[2] = 777

fragments[2] = 777 with fragments[1] = 7

fragments[3] = 77 with fragments[4] = 77

fragments[4] = 77 with fragments[3] = 77

Note that combinations using the same values but from different positions count separately.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.integer fragments
An array of positive integers representing code fragments.

Guaranteed constraints:

2 ≤ fragments.length ≤ 3 × 10⁴  
1 ≤ fragments[i] ≤ 10⁹


[input] integer accessCode
A positive integer representing the complete access code.

Guaranteed constraints:

1 ≤ accessCode ≤ 10⁹


[output] integer
The number of ways to form the access code by combining pairs of fragments.