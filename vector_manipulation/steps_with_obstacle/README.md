Steps to End with Obstacles
Task
Implement std::vector<int> solution(std::vector<int>& numbers, int obstacle):

Board is a 1D array numbers (size n), where each cell numbers[i] ∈ [1, 10] tells how far to jump right from index i.

An obstacle is any index whose value equals obstacle. You cannot land on an obstacle.

For every start index i:

If numbers[i] == obstacle, then steps[i] = -1 (starting on an obstacle).

Otherwise, repeatedly jump right by numbers[pos]. Each jump counts as one step.

If a jump would land on an obstacle index, set steps[i] = -1.

You finish when a jump moves you outside the array (past the last index). That last jump counts.

Return the vector steps, where steps[i] is the number of jumps from i to exit (or -1 if blocked).

Constraints
1 ≤ n ≤ 500

1 ≤ numbers[i] ≤ 10

1 ≤ obstacle ≤ 10

Example
Input:
numbers = {5, 3, 2, 6, 2, 1, 7}, obstacle = 3
Output:
{3, -1, 3, 1, 2, 2, 1}

Walkthrough (selected):

i=0: 0→5 (1), 5→6 (2), 6→off (3) ⇒ 3

i=1: starts on obstacle (3) ⇒ -1

i=3: 3→off (1) ⇒ 1

i=4: 4→6 (1), 6→off (2) ⇒ 2