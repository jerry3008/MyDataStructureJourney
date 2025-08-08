# Capitalize First Letter of Each Word

## Task
Write a C++ function that:
1. Takes an input string (1 to 100 words).
2. Capitalizes the **first letter** of each word (if it’s a letter).
3. Converts the remaining characters in each word to lowercase.
4. Keeps numbers, underscores `_`, and punctuation marks in place without altering their position.
5. Preserves the original word order.

## Constraints
- Words are separated by single spaces (no double spaces).
- Words can contain `[a-zA-Z0-9_]`.
- The string will not start or end with a space.

## Example
**Input:**   SoME rAndoM _TeXT
**Output:**   Some Random _text

## Notes
- If the first character of a word is not a letter, keep it unchanged.
- Ignore punctuation handling; leave it as part of the word if present.