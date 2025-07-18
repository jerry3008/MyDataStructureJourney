# Letter Case Permutation

This task solves the problem of generating all possible letter case combinations of a given string using backtracking.

---

### Problem Statement

You are given a string `s`. Implement a function that returns all possible strings with different letter case permutations.

- Digits and special characters should remain unchanged.
- Only alphabetic characters can change case.

---

### Examples

**Input:**  
`s = "a1b2"`  
**Output:**  
`{"a1b2", "a1B2", "A1b2", "A1B2"}`

**Input:**  
`s = "3z4"`  
**Output:**  
`{"3z4", "3Z4"}`

---

### Approach

We use **backtracking** to explore both lowercase and uppercase possibilities of each character in the input string.

---

###  Time & Space Complexity

- **Time Complexity:** O(2^n) where `n` is the number of letters in the string.
- **Space Complexity:** O(n) for recursion depth + result vector.

---

### How to Run

```bash
g++ main.cpp -o letter_case
./letter_case
