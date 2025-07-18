### All Character Combinations of a String using Recursion and Backtracking

Given a string `s` of `n` characters, your task is to write a recursive algorithm that:

- Returns a vector of **all possible combinations** of characters from the string
- Includes the original string and its **reverse**
- All combinations should be **sorted alphabetically**

---

**Technique**: Use **recursion with backtracking** to explore all possible paths.

---

#### Example

**Input**:
```cpp
s = "abc"
Expected Output:
{
  "a", "ab", "abc", "ac", "acb", 
  "b", "ba", "bac", "bc", "bca", 
  "c", "ca", "cab", "cb", "cba"
}

Constraints
No use of std::next_permutation() or similar utilities.

Return type should be std::vector<std::string>.
Expected Time Complexity
O(n!)