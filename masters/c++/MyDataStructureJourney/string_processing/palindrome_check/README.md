# Palindrome Checker

## Problem

Write a function that checks whether a given string is a palindrome.

- Ignore case (e.g., 'A' == 'a')
- Ignore non-alphanumeric characters (e.g., symbols, punctuation)
- You may use `std::isalnum` and `std::tolower`, but **not** `std::reverse`

## Example

```cpp
isPalindrome("racecar") => true  
isPalindrome("A1B2!c3c2b1a") => true  
isPalindrome("Not a palindrome!") => false
