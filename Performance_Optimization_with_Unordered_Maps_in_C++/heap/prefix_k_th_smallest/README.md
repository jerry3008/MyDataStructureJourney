# Prefix Floor(k/3)-th Smallest Finder

## Problem

Given a list of unique integers, return the `floor(k/3)`-th smallest element for each prefix of length `k`.

### For prefix `numbers[0..k]`, compute:

```cpp
sorted_prefix[floor(k / 3)]
