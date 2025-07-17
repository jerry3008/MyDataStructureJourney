# Reverse Array in Groups of Size k

This C++ solution takes an array and reverses it in chunks of size `k`. If the last chunk has fewer than `k` elements, it is still reversed.

## Example

**Input:**
nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
k = 3

makefile
Copy

**Output:**
{3, 2, 1, 6, 5, 4, 9, 8, 7, 10}

markdown
Copy

## Time Complexity

- **O(n)** where `n` is the number of elements in the vector.