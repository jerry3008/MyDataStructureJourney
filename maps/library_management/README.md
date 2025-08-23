Library Management System
Task

Implement a class that manages a library of books by ISBN:

addBook(const std::string& isbn, const std::string& title)
Add a book with given ISBN and title. Return false if ISBN already exists.

addAuthor(const std::string& isbn, const std::string& author)
Add an author to the book with the given ISBN. Return false if the book does not exist.

getAuthors(const std::string& isbn)
Return the list of authors for the book with the given ISBN. If no such book exists, return an empty list.

Constraints

At most 100 books.

Each book can have a maximum of 5 authors.

ISBN, title, and authors are all strings.