Book Collection with Custom Comparator
Task

Implement a BookCollection using std::map where each Book object is keyed by its publication year.
The Book class contains:

title (string)

publication_year (int)

Requirements

Define a comparator to sort books by publication_year.

Add books into the map with publication year as the key.

Iterate through the collection and print title and publication year.

Constraints

Each book has a unique publication year key.

Up to 100 books can be managed.

Example
// Example collection
{
  1925: {"The Great Gatsby", 1925},
  1949: {"1984", 1949},
  1960: {"To Kill a Mockingbird", 1960}
}


Output iteration should print:

The Great Gatsby (1925)
1984 (1949)
To Kill a Mockingbird (1960)