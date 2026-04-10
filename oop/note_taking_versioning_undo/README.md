# Note-Taking Application with Versioning and Undo (C++)

This task builds a note-taking application that supports note creation, retrieval, tagging, sharing, versioning, and undo functionality.

The base system already supports creating notes, retrieving notes, tagging, querying by tag, and sharing notes with access control. The new enhancement adds version history management and the ability to revert notes to previous versions while preserving sharing integrity.

---

## Objective

Extend the note-taking system with:

- Version history for each note
- Undo functionality to revert to the previous version
- Preservation of all prior note versions
- Backward compatibility with existing note, tag, and sharing features

---

## Existing Functionality

The system already supports:

- `add_note(title, content)`
- `get_note(note_id)`
- `add_tag(note_id, tag)`
- `get_notes_by_tag(tag)`
- `share_note(note_id, user_id, access_level)`
- `get_shared_notes(user_id)`

---

## New Features

### `add_version(const std::string& note_id, const std::string& title, const std::string& content, const std::vector<std::string>& tags)`
Adds a new version of an existing note.

Behavior:
- Updates the note’s title and/or content
- Preserves all previous versions
- Returns `true` if a new version is successfully created
- Returns `false` if:
  - the note does not exist
  - no modifications were detected

Tags passed into the version should reflect the versioned state of the note.

---

### `undo_version(const std::string& note_id)`
Reverts a note to its immediate previous version.

Behavior:
- Returns `true` if the revert is successful
- Returns `false` if:
  - the note does not exist
  - the note is already at its initial version

Undo should restore the previous title, content, and associated tags for that version.

---

## Sharing Integrity Requirement

The sharing functionality must remain intact across the entire version history.

This means:
- Shared notes should still be accessible after version updates
- Access levels must remain valid
- Reverting versions should not break note sharing relationships

---

## Design Focus

This task emphasizes:

- OOP-based note management
- State/version history tracking
- Undo support through version rollback
- Tag persistence across note versions
- Sharing consistency and backward compatibility

---

## Expected Outcome

After implementation, the system should:

- Support complete note lifecycle operations
- Track all note versions without losing history
- Allow reverting to the immediate previous version
- Preserve sharing information regardless of note version changes
- Maintain existing behavior for tagging and note retrieval

---

## Key Concepts

- Version control for application data
- Undo operation design
- Backward-compatible feature extension
- OOP-based note and sharing management
- State preservation across revisions

---

## Build and Run

```bash
g++ -std=c++17 oop/note_taking_versioning_undo/main.cpp -o note_taking_app
./note_taking_app
Notes
This task belongs under OOP.
Focus on preserving all previous note versions rather than overwriting state.
Undo should only revert one version at a time.
Sharing metadata must remain valid across version changes.