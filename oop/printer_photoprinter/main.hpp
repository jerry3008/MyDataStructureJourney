#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

// TODO: Define a base class Printer
class Printer 
{
    public:
    virtual void print_document(const std::string& document) const = 0;
};
class TextPrinter : public Printer
{
    public:
    void print_document(const std::string& document) const override;
    
    
};

// TODO: Define a derived class PhotoPrinter
class PhotoPrinter : public Printer
{
    public:
    void print_document(const std::string& document) const override;
    
    
};

#endif  // SOLUTION_HPP_