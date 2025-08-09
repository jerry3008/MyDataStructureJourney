Add Days to Date
Task
Given a starting date in YYYY-MM-DD format and an integer n (1 ≤ n ≤ 50,000), return the date that is n days later in the same format.
Leap years must be handled correctly:

A year is a leap year if divisible by 4.

Century years are not leap years unless divisible by 400.

Constraints
Input year: 1900 ≤ YYYY ≤ 2100.

Valid month/day for the given year.

Output date should always keep two digits for month/day (zero-padded).

Example
Input:
date = "1999-01-01", n = 365
Output:
"2000-01-01"