#include "solution.hpp"
#include <utility>

bool Library::addBook(const std::string& isbn, const std::string& title) 
{
    auto it = books.find(isbn);
    if(it != books.end())
    {
        return false;
    }
    books[isbn]= std::pair<std::string, std::vector<std::string>> ({title, std::vector<std::string>()});
    return true;
    
}

bool Library::addAuthor(const std::string& isbn, const std::string& author) 
{
    auto it = books.find(isbn);
    if(it == books.end())
    {
        return false;
    }
    auto& authorsid = it->second.second;
    if(authorsid.size() < 5)
    {
        authorsid.push_back(author);
        return true;
    }
    return false;
    
}

std::vector<std::string> Library::getAuthors(const std::string& isbn) 
{
    auto it = books.find(isbn);
    if(it != books.end())
    {
        return it->second.second;
    }
     
    return{};
}