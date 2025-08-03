## Vector Opposite Pair Sum

### 📌 Problem Statement

You are given an array of `n` integers, where `2 ≤ n ≤ 200`. Each element ranges from `-200` to `200`.

Return a vector where each element is the **sum of a pair**:
- Pairing is done from the outermost elements inwards:
  - First element with last,
  - Second element with second-to-last,
  - ...
- If the array length is odd, the middle element pairs with itself.

### 💡 Example

Input:
{1, 2, 3, 4, 5}
Output:
{6, 6, 6}

