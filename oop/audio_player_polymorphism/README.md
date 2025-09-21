# Audio Player — Polymorphism (MP3 & WAV)

## Task
Design an audio player system that demonstrates **polymorphism**:
- Define a common audio interface/base class (e.g., `AudioFile`) with a virtual `play()` method.
- Implement concrete types:
  - `MP3File` — plays MP3 in its own way.
  - `WAVFile` — plays WAV in its own way.
- Create an `AudioPlayer` that accepts pointers/references to `AudioFile` and calls `play()` without needing to know the concrete type.

## Requirements
- Use **runtime polymorphism** (virtual functions) to hide format-specific details behind a unified `play()` API.
- Show usage by storing mixed formats (MP3, WAV) in a single collection and invoking `play()` on each.
- Keep format-specific behavior encapsulated in each derived class.

## Example (behavioral expectation)
- Calling `play()` on an `MP3File` prints something like: `Playing MP3: <filename>`
- Calling `play()` on a `WAVFile` prints something like: `Playing WAV: <filename>`

## Constraints
- Filenames are simple strings (no actual audio I/O).
- Demonstrate at least one MP3 and one WAV item.
- Use proper destructors if managing via base pointers.

## Files
- **main.cpp** — Contains class definitions (`AudioFile`, `MP3File`, `WAVFile`, `AudioPlayer`) and a short demo in `main()`.

## OOP Principle Highlighted
- **Polymorphism**: The client (`AudioPlayer`) calls `play()` on the base type while concrete classes perform their specialized behavior under the hood.
