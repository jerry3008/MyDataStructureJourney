#include "solution.hpp"
#include <map>

Book::Book(std::string author, std::string title) : author(author), title(title) {}

struct Comparator 
{
    bool operator()(const Book&a, const Book&b)const
    {
        return (a.author < b.author) || (a.author == b.author && a.title < b.title);
    }
    // TODO: Implement comparator to sort by author's name
};


void display_library(const std::map<Book, int, Comparator>& library) 
{
    // TODO: Implement logic to display the library showcasing each book's title and author.
    for(const auto& elem : library)
    {
        std::cout << '{'<< "Book(" <<elem.first.author<<", "<<elem.first.title<<"),"<< elem.second<<'}'<<std::endl;
        std::cout<<std::endl;
    }
}


int main() {
    // TODO: Initialize a map with books using the custom comparator
    std::map<Book, int, Comparator>library;
    Book Book0("Orwell", "1984");
    Book Book1("Huxley", "Brave New World");
    Book Book2("Tolkien", "The Hobbit");
    Book Book3("Austen", "Pride and Prejudice");
    
    library[Book0] = 10;
    library[Book1] = 20;
    library[Book2] = 15;
    library[Book3] = 30;
    
    display_library(library);
    return 0;
}