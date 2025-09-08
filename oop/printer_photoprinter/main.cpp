#include "main.hpp"

// TODO: Define the method in Printer to print "Printing: <document>"
void TextPrinter::print_document(const std::string& document)const
{
    std::cout<< "Printing:"<<document<<std::endl;
};

// TODO: Define the overridden method to print "Printing photo: <document>"
void PhotoPrinter::print_document(const std::string& document)const
{
    std::cout<< "Printing photo:"<<document<<std::endl;
};

int main() {
   PhotoPrinter photoPrint;
   TextPrinter  textPrinter;
   
   Printer* printers[] = {&textPrinter, &photoPrint };

    
    std::string docs[] = {"Text Document", "Photo Document"};
    for (int i = 0; i < 2; ++i) {
        printers[i]->print_document(docs[i]);
    }
    // TODO: Create instances of Printer and PhotoPrinter
    // Store them in a list and iterate through the list
    // Call print_document on each with appropriate documents

    return 0;
}