Extract Characters from Second Half of Even-Length Words (ASCII Filter)
Task
Given a sentence (words separated by spaces) and a character c, process each word of even length as follows:

Extract the second half of the word (counting punctuation as part of the word).

From this second half, select only the characters whose ASCII value is less than the ASCII value of c.

Concatenate these selected characters from all qualifying words in their original order to form the output string.

If no word meets the criteria, return an empty string.

Constraints
Sentence length: 1 to 500 characters.

Words separated by a single space.

Characters may be lowercase/uppercase letters, digits, punctuation.

The ASCII comparison is case-sensitive.

Even length is determined by the total number of characters in the word, including punctuation.

Example
Input:

sentence = "Python is a high-level programming language."
c = 'n'
Steps:

Python (length 6) → second half = "hon" → chars < 'n': "h"

is (length 2) → second half = "s" → no char < 'n'

a (length 1) → odd, skip

high-level (length 10) → second half = "level" → chars < 'n': "l", "e", "e", "l"

Output:
"hleel"