include <string>
#include <map>
#include <iostream>

struct Comparator;

class Book {
public:
    Book(std::string author, std::string title);

    std::string author;
    std::string title;
};

void display_library(const std::map<Book, int, Comparator>& library);