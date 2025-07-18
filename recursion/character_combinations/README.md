# Character Combination from Multiple Strings

This task generates all unique words by choosing one character from each string in a vector of strings.

---

### Problem Statement

You are given a vector of `n` strings where each string contains `m` characters. Your task is to return **all combinations of characters**, selecting **one character from each string** to form a word of `n` characters.

- The output should be **sorted in alphabetical order**.
- Use **backtracking** to explore possible combinations.

---

### Example

**Input:**
```cpp
words = {"pq", "rs", "tu"}

Output:
{"prt", "pru", "pst", "psu", "qrt", "qru", "qst", "qsu"}
