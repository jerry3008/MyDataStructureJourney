Replace Words with Their Reversed Form in Corresponding Sentences
Task
Given two vectors of equal length sentences and words (1 ≤ n ≤ 100), replace all occurrences of words[i] in sentences[i] with the reverse of words[i].
Replacement is case-insensitive, and the capitalization of the first letter in each occurrence must be preserved.
If the word is not found, keep the sentence unchanged.

Constraints
Each sentence: length 1 to 500 characters.

Each word: lowercase English letters, length 1 to 10 characters.

Preserve original punctuation and spacing.

Only replace full matches of the target word (case-insensitive).

Example
Input:
sentences = {
    "this is a simple example.",
    "the name is bond. james bond.",
    "remove every single e"
}
words = {
    "simple",
    "bond",
    "e"
}
Output:
{
    "this is a elpmis example.",
    "the name is dnob. james dnob.",
    "remove every single e"
}