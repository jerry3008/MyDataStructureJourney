Move First Following Letter Before Each Number
Task
Given an alphanumeric string s (length 3–10^6) where each number is followed somewhere later by at least one alphabetic character before the next number, transform the string so that for each number, the first alphabetic character after it is moved to directly precede that number. Remove any spaces/punctuation between the number and that first letter. Preserve the order of all other characters.

Constraints
3 ≤ |s| ≤ 10^6

Contains at least one number.

Numbers are non-negative integers (one or more digits).

Between a number and the next number, there is at least one alphabetic character [A-Za-z].

Spaces and punctuation may appear anywhere; only the first alphabetic character after the number moves; characters between that letter and the number are removed.

Example
Input:
"I have 2 apples and 5! oranges and 3 grapefruits."

Output:
"I have a2pples and o5ranges and g3rapefruits."