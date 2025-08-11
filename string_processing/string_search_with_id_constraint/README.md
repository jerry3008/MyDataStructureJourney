String Search with ID Constraint
Task
Implement stringSearch(sourceArray, searchArray) that returns all pairs from sourceArray whose string is a substring of at least one string in searchArray and whose identifier is ≤ the identifier of that matching searchArray pair.
Preserve the original order from sourceArray. Return an empty array if no matches.

Constraints
1 ≤ n ≤ 100 (size of sourceArray)

1 ≤ m ≤ 500 (size of searchArray)

Identifiers in both arrays: 1..100

sourceArray string length: 1..100 (alphanumeric)

searchArray string length: 1..500 (alphanumeric)

Example
Input:
sourceArray = {(1, "abc"), (2, "def"), (3, "xyz")}
searchArray = {(1, "abcdef"), (5, "uvwxy")}

Output:
{(1, "abc")}
Reason: "abc" is in "abcdef" and 1 ≤ 1.
"def" is in "abcdef" but 2 ≤ 1 is false.
"xyz" not found in any searchArray string.