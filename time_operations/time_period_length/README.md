Calculate Minutes in a Time Period
Task
Given a time period string in the format "HH:MM:SS - HH:MM:SS", calculate how many full minutes pass from the start time until the end time.
Disregard leftover seconds — a time difference of "12:15:00 - 12:16:59" is 1 minute, not 2.

Constraints
Input format: "HH:MM:SS - HH:MM:SS".

00 ≤ HH ≤ 23, 00 ≤ MM, SS ≤ 59.

Start time is always earlier than end time (no overnight periods).

Output: integer (number of minutes).

Example
Input:
"12:15:30 - 14:00:00"
Output:
104 (1h 44m)