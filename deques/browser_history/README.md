# BrowserHistory (Deque-based)

BrowserHistory with Deques
Task

Implement a BrowserHistory that supports:

void visit(const std::string& url): Add a new URL to history and clear any forward history.

std::string back(int steps): Move back up to steps entries if possible; return the current URL.

std::string forward(int steps): Move forward up to steps entries if possible; return the current URL.

Use deques to efficiently manage past and future navigations.

Example

visit("codesignal.com") → history: ["codesignal.com"]

visit("learn.codesignal.com") → ["codesignal.com","learn.codesignal.com"]

visit("learn.codesignal.com/course-paths") → ["codesignal.com","learn.codesignal.com","learn.codesignal.com/course-paths"]

back(2) → returns "codesignal.com" (current at "codesignal.com")

forward(1) → returns "learn.codesignal.com" (current at "learn.codesignal.com")

## Goal
Implement a browser history manager using **deques** to support:
- `visit(url)`: add a new URL and clear forward history.
- `back(steps)`: go back up to `steps` entries; return current URL.
- `forward(steps)`: go forward up to `steps` entries; return current URL.

## Example
1. visit("codesignal.com")
2. visit("learn.codesignal.com")
3. visit("learn.codesignal.com/course-paths")
4. back(2)      -> "codesignal.com"
5. forward(1)   -> "learn.codesignal.com"

## Notes
- Use two deques: one for **back stack/history**, one for **forward stack**.
- Current URL can be held separately, or the back deque’s back can be treated as current.
- Visiting a new URL **clears forward deque**.
