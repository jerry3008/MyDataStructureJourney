#include <iostream>
#include <map>
#include <string>

class Book {
public:
    Book(std::string title, int publication_year);

    std::string title;
    int publication_year;
};

struct BookComparator {
    bool operator()(const Book &a, const Book &b) const;
};

#endif