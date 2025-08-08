# Reverse Consecutive Character Groups

## Task
Write a C++ function that, given a non-empty string (length ≤ 500), scans from the **end** of the string and returns all consecutive groups of identical characters in reverse order. Each result element is a pair: `{char, count}`.

## Example
Input: "aaabbcccdde"  
Output: { {'e', 1}, {'d', 2}, {'c', 3}, {'b', 2}, {'a', 3} }

## Notes
- Scan from the end toward the beginning.
- Return groups in the same reverse order (end to start).
- Only standard iteration and counting; no extra requirements.
