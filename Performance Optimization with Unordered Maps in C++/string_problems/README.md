You are presented with a string containing n characters, ranging from 
1
1 to 
500
500 inclusive, with each character from the ASCII printable character set (decimal from 32 to 126 inclusive). Each character in the string could be a space, a punctuation mark, a number, or a letter, and is case-sensitive.

The task asks you to return a pair containing two elements. The first element should be a character from the string, and the second element is an integer calculated as follows: Identify all unique words in the string, where a word is defined as a sequence of non-space characters separated by one or more spaces. The character you should return is the one whose removal (removal of all occurrences of that letter) would lead to the maximum number of unique words broken in the string, where a broken word is a word from which at least one letter is removed. The integer in the pair is the resulting maximum number of words.

A word can contain any number of characters, ranging from 
1
1 to the length of the original string, and it might include punctuation marks and numbers. For example, the words in "Life is like a box of chocolates" are: {"Life", "is", "like", "a", "box", "of", "chocolates"}, while the words in the string “1... 2... 3... Go!” are: {"1...", "2...", "3...", "Go!"}.

For example, given the string "Hello, world!", the function should return: ('l', 2), since selecting and removing the character 'l' would result in the maximum number of unique broken words. 2 words would broke, so the integer in the pair should be 2.

Note: In the case that there are multiple characters that could be selected, return the one that appears first in the string. For the above example, o is also a character that breaks maximum number of words when removed, but l appears earlier.

The solution should have a time complexity of O(n).