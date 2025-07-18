### Distinct Permutations with Recursion and Backtracking

You are provided with an array of `n` integers, which may contain duplicate elements.

Write a **recursive function** that generates all **distinct permutations** of the numbers in the array. The permutations should:
- Be the same length as the input array
- Be in **lexicographically sorted order**

You may **not** use built-in library functions that generate permutations (like `std::next_permutation` or similar).

**Use recursion with backtracking.**

---

**Example Input**:
```cpp
nums = {2, 3, 2, 2}

Expected Output:

{
  {2, 2, 2, 3},
  {2, 2, 3, 2},
  {2, 3, 2, 2},
  {3, 2, 2, 2}
}

Expected Time Complexity:

O(N!)