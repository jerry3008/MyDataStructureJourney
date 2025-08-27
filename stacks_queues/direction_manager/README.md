Direction Manager with Undo/Redo (Stacks & Queues)
Task

Implement a direction manager on a 2D grid starting at (0, 0). Movements are one step among "U", "D", "L", "R". Maintain history with a stack (done moves) and a queue (redo).

Methods

std::pair<int,int> move(const std::string& direction)
Move one step; push new position to the history stack. Clear redo queue.
If direction is invalid, print an error and do not move. Return new (x, y).

std::optional<std::pair<int,int>> undoMove()
Undo the most recent move: pop from history stack to redo queue.
Return current position after undo, or std::nullopt if nothing to undo.

std::optional<std::pair<int,int>> redoMove()
Redo the most recent undone move: dequeue from redo queue back to history stack.
Return current position after redo, or std::nullopt if nothing to redo.

std::vector<std::pair<int,int>> getPath() const
Return all visited positions in the order they were visited.

Rules & Details

Valid directions: "U", "D", "L", "R".

Start at (0, 0); include starting position in the path design if desired (document choice).

On move: history push + redo clear.

On undo: last position goes to redo; current becomes previous.

On redo: take from redo and apply as next current.

Max movements: ≤ 500.

Example (conceptual)

Start: (0,0)

move("U") → (0,1)

move("R") → (1,1)

undoMove() → back to (0,1); (1,1) in redo

redoMove() → (1,1) again