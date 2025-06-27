# Closest Half Match Finder

## Problem Statement

You are given two arrays, `X` and `Y`, each of size between `1` and `500,000` inclusive. Each array contains **unique positive integers** between `1` and `10⁵`. Also, `Y` is guaranteed to be **at least as long** as `X`.

### Task

For each element `Y[i]`, find the element in `X` that is **closest to `Y[i] / 2`**. If multiple elements in `X` are equally close, choose the one with the **lowest index** in `X`.

Then, find the **corresponding index `j`** of that chosen element in `X`, and **return `Y[j]`**. Repeat this for every `Y[i]`.

### Example

```cpp
X = {4, 12, 9, 20};
Y = {10, 20, 40, 50};
