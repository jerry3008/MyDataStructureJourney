#include "main.hpp"
#include <sstream>
#include <string>
#include <vector>

FileSystem::FileSystem() 
{
    root = new Directory();
}

bool FileSystem::add_directory(const std::string& path) 
{
    Directory* curr = root;
    std::stringstream ss(path);
    std::string part;
    std::vector<std::string> parts;
    while(std::getline(ss, part , '/'))
    {
        if (part.empty()) continue;
        parts.push_back(part);
    }
    for(int i = 0; i < parts.size(); ++i)
    {
        if(i == parts.size() - 1)
        {
            if(curr->subdirectories.count(parts[i])) return false;
            curr->subdirectories[parts[i]] = new Directory();
            return true;
        }else 
        {
            if(!curr -> subdirectories.count(parts[i]))return false;
            curr = curr->subdirectories[parts[i]];
        }
    }
    return false;
}

bool FileSystem::add_file(const std::string& path, const std::string& content) 
{
    Directory* curr = root;
    std::stringstream ss(path);
    std::string part;
    std::vector<std::string>parts;
    while(std::getline(ss, part, '/'))
    {
        if(part.empty())continue;
        parts.push_back(part);
    }
    for(int i = 0; i < parts.size(); i++)
    {
        if(i == parts.size() - 1)
        {
            if (curr->files.count(parts[i])) return false;
            curr -> files[parts[i]] = content;
            return true;
        }else
        {
            if(!curr -> subdirectories.count(parts[i])) return false;
            curr = curr -> subdirectories[parts[i]];
        }
    }
    
    return false;
}

std::optional<std::string> FileSystem::get_content(const std::string& path) 
{
    Directory * curr = root;
    std::stringstream ss(path);
    std::string part;
    std::vector<std::string> parts;
    while (std::getline(ss, part, '/')) 
    {
        if(part.empty())continue;
        parts.push_back(part);
    }
    for(int i = 0; i < parts.size(); ++i)
    {
        if(i == parts.size() - 1)
        {
            if(curr -> files.count(parts[i])) 
            {
                return curr->files[parts[i]];
            }else 
            {
                return std::nullopt;
            }
        }else
        {
            if (!curr->subdirectories.count(parts[i])) return std::nullopt;
            curr = curr->subdirectories[parts[i]];
        }
    }
    return std::nullopt;
}

bool FileSystem::delete_item(const std::string& path) 
{
    Directory * curr = root;
    std::stringstream ss(path);
    std::string part;
    std::vector<std::string> parts;
    while (std::getline(ss, part, '/')) 
    {
        if(part.empty())continue;
        parts.push_back(part);
    }
    for(int i = 0; i < parts.size(); ++i)
    {
        if(i == parts.size() - 1)
        {
            if(curr -> files.count(parts[i])) 
            {
                curr->files.erase(parts[i]);
                return true;
            }
            if(curr->subdirectories.count(parts[i]))
            {
                delete curr->subdirectories[parts[i]];
                curr->subdirectories.erase(parts[i]);
                return true;
            }
            return false;
        }else
        {
            if (!curr->subdirectories.count(parts[i])) return false;
            curr = curr->subdirectories[parts[i]];
        }
    }
    return false;
}