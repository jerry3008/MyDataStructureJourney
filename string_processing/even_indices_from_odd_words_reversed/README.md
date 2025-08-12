Even-Indexed Characters from Odd-Length Words (Reversed)
Task
Given a sentence (words separated by spaces), collect the even-indexed characters (0-based) from every word whose length is odd. Concatenate these characters in order of appearance, then reverse the resulting string and return it. Punctuation counts toward word length.

Constraints
Sentence length: up to 500 characters (including spaces).

Words are separated by single spaces.

Punctuation is part of the word (e.g., "Coding!" has length 7).

Single-character words are included (index 0 is even).

Example
Input:
"Coding tasks are fun and required"
Collected (even indices from odd-length words): "tssaefnad"
Output (reversed):
"danfeasst"