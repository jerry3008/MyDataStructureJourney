ChatGPT said:
Add Seconds to Times (HH:MM:SS)
Task
Given a vector of time strings timePoints in "HH:MM:SS" format and an integer added_seconds (1–86,400), return a new vector where each time is advanced by added_seconds, wrapping past midnight as needed. Output times must remain in "HH:MM:SS" format.

Constraints
1 ≤ timePoints.size() ≤ 100

Each timePoints[i] is a valid time from "00:00:00" to "23:59:59".

1 ≤ added_seconds ≤ 86,400

Result may roll over to the next day (mod 24 hours).

Example
Input:
timePoints = {"10:00:00", "23:30:00"}, added_seconds = 3600
Output:
{"11:00:00", "00:30:00"}