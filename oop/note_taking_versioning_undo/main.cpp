#include "solution.hpp"

std::string NoteTakingApp::add_note(const std::string& title, const std::string& content) {
    std::string note_id = std::to_string(notes_.size() + 1);
    notes_[note_id] = NoteHistory(Note{title, content, {}});
    return note_id;
}

std::optional<std::pair<std::string, std::string>> NoteTakingApp::get_note(const std::string& note_id) {
    if (notes_.count(note_id) > 0) {
        const auto& note = notes_.at(note_id).current;
        return std::make_optional(std::make_pair(note.title, note.content));
    }
    return std::nullopt;
}

bool NoteTakingApp::add_tag(const std::string& note_id, const std::string& tag) {
    if (notes_.count(note_id)) {
        notes_.at(note_id).current.tags.push_back(tag);
        tags_[tag].insert(note_id);
        return true;
    }
    return false;
}

std::vector<std::pair<std::string, std::string>> NoteTakingApp::get_notes_by_tag(const std::string& tag) {
    std::vector<std::pair<std::string, std::string>> result;
    if (tags_.count(tag)) {
        for (const auto& note_id : tags_.at(tag)) {
            const auto& note = notes_.at(note_id).current;
            result.emplace_back(note_id, note.title);
        }
    }
    return result;
}

bool NoteTakingApp::share_note(const std::string& note_id, const std::string& user_id, const std::string& access_level) {
    if (notes_.count(note_id)) {
        shares_[note_id][user_id] = access_level;
        return true;
    }
    return false;
}

std::vector<std::tuple<std::string, std::string, std::string, std::string>> NoteTakingApp::get_shared_notes(const std::string& user_id) {
    std::vector<std::tuple<std::string, std::string, std::string, std::string>> shared_notes;
    for (const auto& [note_id, users] : shares_) {
        if (users.count(user_id)) {
            const auto& note = notes_.at(note_id).current;
            shared_notes.emplace_back(note_id, note.title, note.content, users.at(user_id));
        }
    }
    return shared_notes;
}

bool NoteTakingApp::add_version(const std::string& note_id, const std::string& title, const std::string& content, const std::vector<std::string>& tags) 
{
    if (notes_.count(note_id))
    {
        auto& note_history = notes_.at(note_id);
        if (note_history.current.title != title ||note_history.current.content != content || note_history.current.tags  != tags)
        {
            note_history.previous_versions.push_back(note_history.current);
            note_history.current.title = title;
            note_history.current.content = content;
            note_history.current.tags = tags;
            return true;
            
        }
        
    }
    return false;
}

bool NoteTakingApp::undo_version(const std::string& note_id) 
{
    if (notes_.count(note_id) && !notes_.at(note_id).previous_versions.empty())
    {
        
        auto& note_history = notes_.at(note_id);
        note_history.current = note_history.previous_versions.back(); 
        note_history.previous_versions.pop_back();
    
        return true;
    }
    return false;
}