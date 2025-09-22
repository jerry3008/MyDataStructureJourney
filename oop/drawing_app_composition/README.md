# Drawing Application — Composition Pattern

## Task
Build a simple drawing application using **composition**:
- Define a common shape interface/base (e.g., `Shape` with `render()`).
- Implement concrete shapes (`Circle`, `Rectangle`, `Triangle`) that each know how to render themselves.
- Create a `Canvas` class that **composes** a collection of shapes and can:
  - `add_shape(...)` to collect shapes
  - `render_all()` to trigger each shape’s `render()`.

## Requirements
- Use composition: `Canvas` owns/holds many `Shape` objects (e.g., via `std::vector<std::unique_ptr<Shape>>`).
- Each shape encapsulates its own drawing logic (e.g., print statements describing parameters).
- Demonstrate:
  - Adding multiple shapes to the canvas
  - Calling `render_all()` to render them in insertion order

## Example (expected behavior)
- `Circle` prints: `Rendering Circle at (x,y) with radius r`
- `Rectangle` prints: `Rendering Rectangle at (x,y) with width w and height h`
- `Triangle` prints: `Rendering Triangle with vertices (x1,y1), (x2,y2), (x3,y3)`
- `Canvas::render_all()` calls each shape’s `render()`.

## Notes
- No real graphics required—console output is sufficient to show composition and dispatch.
- Keep destructors/ownership safe if storing polymorphic shapes (e.g., smart pointers).

## Files
- **main.cpp** — Define `Shape`, concrete shapes, `Canvas`, and a short demo of adding shapes and rendering all.
