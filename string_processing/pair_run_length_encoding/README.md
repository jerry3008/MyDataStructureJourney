# Pair Run-Length Encoding

## Task
Write a C++ function that takes a lowercase-only string (length ≤ 500) and identifies **consecutive identical pairs** of characters from left to right. Each pair is output along with the number of consecutive repetitions.

If the string length is odd, the last single character is appended with a repetition count of 1.

## Example
**Input:**  
`"aaabbabbababaca"`

**Processing:**  
Pairs: aa, ab, ba, bb, ab, ab, ac, leftover a  
Encoded: `aa1ab1ba1bb1ab2ac1a1`

**Output:**  
`"aa1ab1ba1bb1ab2ac1a1"`

## Notes
- Operates on pairs, not individual characters.
- Counts only consecutive identical pairs.
- For odd-length strings, the last character is appended with `1`.
