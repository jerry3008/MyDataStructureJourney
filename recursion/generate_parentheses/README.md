# Generate Parentheses

This task solves the classic backtracking problem of generating all combinations of well-formed parentheses for a given number `n`.

---

### Problem Statement

Given an integer `n`, return all possible combinations of `n` pairs of parentheses that are valid. A valid combination means every opening bracket has a corresponding closing bracket.

---

### Example

**Input:**  
`n = 3`

**Output:**  
((()))
(()())
(())()
()(())
()()()


---

### Approach

We use **backtracking** to build the string incrementally:
- Only add an open `(` if we haven’t used up all `n`.
- Only add a close `)` if it won't lead to an invalid state (i.e., `close < open`).

---

### Time & Space Complexity

- **Time Complexity:** Approx. O(2^n), pruned by constraints.
- **Space Complexity:** O(n) for recursion depth, plus result storage.

---

### How to Run

```bash
g++ main.cpp -o generate
./generate
