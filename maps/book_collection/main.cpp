#include "main.hpp"

Book::Book(std::string title, int publication_year) : title(title), publication_year(publication_year) {}

// Define a comparator for Book that compares based on publication year
bool BookComparator::operator()(const Book &a, const Book &b) const 
{
    return(a.publication_year < b.publication_year) || (a.publication_year  ==  b.publication_year && a.title < b.title);
}

int main() {
    std::map<Book, std::string, BookComparator> book_collection;
    
    Book cpp_book("C++ 101", 2021);
    book_collection[cpp_book] = "C++ 101";
    Book python_book("python 101", 2021);
    book_collection[python_book] = "python 101";
    Book java_book("Java 101", 2022);
    book_collection[java_book] = "Java 101";
    
    for(const auto& elem : book_collection)
    {
       std::cout << elem.first.title << ": " << elem.first.publication_year << std::endl;
        std::cout<<std::endl;
    }
    return 0;
}