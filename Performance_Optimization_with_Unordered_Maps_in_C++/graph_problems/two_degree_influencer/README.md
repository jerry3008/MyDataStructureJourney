# Two-Degree Influencer Finder

## Problem Statement

You are given a list of `m` **undirected connections** between people, where each person is identified by a unique positive integer (`1 ≤ ID ≤ 1001`). A pair `(a, b)` indicates a bidirectional friendship between person `a` and person `b`.

### Objective

Identify the person who has the **largest number of unique connections within two degrees** (i.e., direct friends + friends of friends).

- If multiple people have the same number of 2-degree connections, return the person with the **lowest ID**.

---

## Function Signature

```cpp
int findInfluencer(const std::vector<std::pair<int, int>>& connections);
