# Writing & Publishing System — OOP Design

## Task
Design an editor suite that manages various editor types (code, prose) and publishes documents.

### Core Requirements
- **Editor (abstract/base)**
  - `load(const std::string& content)`
  - `edit(const std::string& delta)`
  - `format()` — editor-specific formatting
  - `export_text() const` — returns final text
- **CodeEditor (derived)**
  - Code-aware `format()` (e.g., indentation, braces spacing)
  - May simulate syntax highlighting decisions via text markers
- **ProseEditor (derived)**
  - Prose-aware `format()` (e.g., sentence spacing, capitalization rules)
- **Document**
  - Holds title + body text
  - Integrates with an `Editor` to transform text
- **Publisher**
  - `publish(const Document&)` — returns “published artifact” (e.g., versioned string or printable output)
  - Can accept different document types uniformly via base interfaces

### Design Notes
- Use **polymorphism** to treat `CodeEditor` and `ProseEditor` uniformly through the `Editor` interface.
- Favor **composition**:
  - `Document` composes content and uses an `Editor`.
  - `Publisher` consumes a `Document`’s exported text.
- Keep responsibilities separate:
  - Editors: transform/format text.
  - Document: store text + coordinate editing.
  - Publisher: finalize/output text.

### Demonstration (expected behavior)
- Create a `Document` for code and one for prose.
- Apply `load`, `edit`, and `format` via the appropriate editor (code vs prose).
- Export text and pass to `Publisher::publish` to produce output messages (e.g., “Published: <title> [len=... chars]”).
- Show polymorphism by handling both editor types through a common `Editor*` or smart pointer.

### Suggested Interfaces (high level)
- `class Editor { virtual void load(...); virtual void edit(...); virtual void format(); virtual std::string export_text() const = 0; virtual ~Editor() = default; }`
- `class CodeEditor : public Editor { ... }`
- `class ProseEditor : public Editor { ... }`
- `class Document { std::string title; std::string body; Editor& editor; ... }`
- `class Publisher { std::string publish(const Document& doc); }`

### Files
- **main.cpp** — Define classes and a short demo creating code/prose documents, applying edits, formatting, and publishing.
