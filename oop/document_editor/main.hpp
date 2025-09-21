#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

// TODO: Create a class Document with private member 'content_' for the document content.

class Document
{
    std::string content_;
    
    public:
    void add_content(const std::string& new_content);
    void display_content() const;
};

#endif