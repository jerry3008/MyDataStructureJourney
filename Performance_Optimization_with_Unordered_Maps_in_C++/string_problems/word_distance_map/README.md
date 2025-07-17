# Word Distance Map

## Problem Statement

Construct a C++ function named `solution()` that takes a vector of `n` words and returns a map where:
- Each key is a unique word that appears more than once in the vector.
- Each value is the **shortest distance** between two occurrences of that word.

Words that appear only once should be excluded from the result.

### Definitions
- **Distance** between two occurrences of a word is defined as the absolute difference in their positions in the vector.
- Input vector length: `1 <= n <= 10^5`
- Each word:
  - Contains only lowercase or uppercase English letters.
  - Has a length between `1` and `50`.

### Example

**Input**:
```cpp
{"dog", "cat", "bird", "cat", "dog", "elephant", "dog"}
