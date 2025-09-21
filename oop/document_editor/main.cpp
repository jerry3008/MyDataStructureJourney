#include "main.hpp"

void Document::add_content(const std::string& new_content) 
{
    content_ += new_content + "\n";
}

void Document::display_content() const
{
    std::cout<<content_<<std::endl;
}
int main()
{
    Document document;
    document.add_content("this is how i become great!!");
    document.add_content("this is how i by my AMG!!");
    document.add_content("this is how i become great!!");
    document.display_content();
}
// TODO: Define a Document class with an initializer that initializes an empty string for document content.
// TODO: Add a method to the Document class that lets you append new content (a string) to the document. Remember, external access to the document content should be restricted.
// TODO: Add another method to display all the content of the document beautifully.
// Create an instance of the Document class.
// TODO: Use the methods you've defined to add some content to your document instance.
// TODO: Call the method that displays the document's content.
