Evaluate Bidirectional Path Game
Task
Implement evaluatePath(const std::vector<int>& numbers) that simulates a 1D game:

numbers[i] ∈ [-100, 100]

> 0: move that many steps right

< 0: move that many steps left

0: blockade → game ends

Start at index 0.

If a move would go out of bounds, reverse the global direction (once). After reversing:

positives move left, negatives move right.

The game ends when:

you land on a blockade (0), or

you would go out of bounds again after already reversing once.

Return {final_position, total_moves}.

It’s guaranteed no infinite loops (no position revisited more than once).

Constraints
1 ≤ n ≤ 500

-100 ≤ numbers[i] ≤ 100

Example
Input:
[3, 4, 1, 1, -3, 1]
Output:
(4, 5)

Walkthrough:

pos 0 → +3 → pos 3 (moves=1)

pos 3 → +1 → pos 4 (moves=2)

pos 4 → -3 → pos 1 (moves=3)

pos 1 → +4 → pos 5 (moves=4)

pos 5 → +1 would go out → reverse → now + means left

pos 5 → 1 left → pos 4 (moves=5)

pos 4 → -3 (now - means right) would go out again → end.
Result: (4, 5)