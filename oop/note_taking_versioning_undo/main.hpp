#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <vector>
#include <set>
#include <optional>
#include <tuple>

struct Note {
    std::string title;
    std::string content;
    std::vector<std::string> tags;
    
    Note() = default;

    Note(const std::string& title, const std::string& content, const std::vector<std::string>& tags)
        : title(title), content(content), tags(tags) {}
};

struct NoteHistory {
    Note current;
    std::vector<Note> previous_versions;
    
    NoteHistory() = default;

    NoteHistory(Note current_note, std::vector<Note> previous = {})
        : current(std::move(current_note)), previous_versions(std::move(previous)) {}
};

class NoteTakingApp {
public:
    std::string add_note(const std::string& title, const std::string& content);
    std::optional<std::pair<std::string, std::string>> get_note(const std::string& note_id);
    bool add_tag(const std::string& note_id, const std::string& tag);
    std::vector<std::pair<std::string, std::string>> get_notes_by_tag(const std::string& tag);
    bool share_note(const std::string& note_id, const std::string& user_id, const std::string& access_level);
    std::vector<std::tuple<std::string, std::string, std::string, std::string>> get_shared_notes(const std::string& user_id);
    bool add_version(const std::string& note_id, const std::string& title, const std::string& content, const std::vector<std::string>& tags);
    bool undo_version(const std::string& note_id);
private:
    std::unordered_map<std::string, NoteHistory> notes_;
    std::unordered_map<std::string, std::set<std::string>> tags_;
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> shares_;
};

#endif  // SOLUTION_HPP_