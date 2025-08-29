Library System — Sorted by Author
Task

Implement a library system using std::map where:

Each Book has an author and a title.

The key is a Book object.

The value is the price (int).

A custom comparator sorts books by author.

Requirements

Define a Comparator struct that overloads operator() to compare books by author.

Use std::map<Book, int, Comparator>.

Implement display_library to iterate and print books in sorted order.

Example initialization:

{
    {Book("Orwell", "1984"), 10},
    {Book("Huxley", "Brave New World"), 20},
    {Book("Tolkien", "The Hobbit"), 15},
    {Book("Austen", "Pride and Prejudice"), 30}
}


Expected output is sorted by author:

Pride and Prejudice by Austen - $30
Brave New World by Huxley - $20
1984 by Orwell - $10
The Hobbit by Tolkien - $15