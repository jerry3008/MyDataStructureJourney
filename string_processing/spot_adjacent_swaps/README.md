Spot Adjacent Character Swaps Between Two Strings
Task
Given two strings source and target of equal length (1 ≤ n ≤ 500), both containing only lowercase English letters, find positions where two adjacent characters in source have swapped places in target.
Return a vector of pairs {index, swapped_char} representing:

index: the zero-based position of the first character in the swapped pair in source.

swapped_char: the character from source[index+1] that now appears at position index in target.

Swap Detection Rule
A swap is detected at position i if:

source[i] != target[i]

source[i+1] == target[i]

source[i] == target[i+1]

Each character can be swapped at most once.

Do not check the last character (i = n-1) since there is no adjacent character to swap with.

Constraints
1 ≤ n ≤ 500

Strings contain only lowercase English letters.

Output order: same as the order found in the string.

Example
Input:

source = "hello"
target = "hlelo"
Output:

{ {1, 'l'} }
Explanation: Characters 'e' and 'l' at positions 1 and 2 in "hello" have swapped in "hlelo".