Most Frequent Char from Odd-Length Words (Concatenated, Lowercased)
Task
Given a sentence of n words (1 ≤ n ≤ 100) separated by single spaces, return a string formed by taking, for each word of odd length, the most frequent character (case-insensitive) in that word.

Count letters case-insensitively; the output must be lowercase.

If there’s a tie, choose the character that appears first in that word.

Concatenate the chosen characters in the original word order.

If no word has odd length, return an empty string.

Constraints
Each word length: 1 to 500 characters.

Sentence length ≥ 1 character; never just a single whitespace.

Characters may include lowercase/uppercase alphanumerics and punctuation.

Words are split by a single space; punctuation counts toward word length.

Example
Input:
"Hello world this is a demo string"
Odd-length words: "Hello" (5), "world" (5), "a" (1)
Most frequent per word (case-insensitive, tie → first occurrence):

Hello → l

world → w

a → a
Output:
"lwa"