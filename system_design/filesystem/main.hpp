#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <optional>
#include <map>

class FileSystem {
public:
    FileSystem();
    bool add_directory(const std::string& path);
    bool add_file(const std::string& path, const std::string& content);
    std::optional<std::string> get_content(const std::string& path);
    bool delete_item(const std::string& path);

    struct Directory {
        std::map<std::string, Directory*> subdirectories;
        std::map<std::string, std::string> files;
    };

private:
    Directory* root;
};