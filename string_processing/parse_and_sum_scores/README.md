Parse and Sum Scores from Free-Form String
Task
Given a string s (length 1–500) that mixes lowercase player names and integer scores (1–100), parse the string, extract all integers, and return their total sum.

Constraints
String length: 1 to 500 characters.

Player names: lowercase a–z.

Scores: integers in the range 1 to 100.

String may include spaces and punctuation; numbers may appear anywhere.

Example
Input:
"joe scored 5 points, while adam scored 10 points and bob scored 2, with an extra 1 point scored by joe"
Output:
18 (5 + 10 + 2 + 1)