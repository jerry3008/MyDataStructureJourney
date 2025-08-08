Swap Letters and Numbers in Hyphen-Separated String
Task
Given a hyphen-separated string where each token is either a lowercase letter a–z or a number 1–26, convert letters to their numeric positions and numbers to their corresponding letters. Rejoin tokens with hyphens, preserving original order.

Constraints
Total input length: 1 to 1000 characters.

Tokens are separated by single hyphens (-), no leading/trailing hyphens.

Tokens are either:

a single lowercase letter a–z, or

a number in the range 1–26.

Mapping is case-sensitive (a ↔ 1, z ↔ 26).

Example
Input: "1-a-3-c-5"
Output: "a-1-c-3-e"