Polymorphic Printing System
Task

Implement a polymorphic printing system with two classes:

Base class: Printer

Method: virtual void print_document(const std::string& document)

Behavior: outputs "Printing: <document>".

Derived class: PhotoPrinter

Inherits from Printer.

Overrides print_document to output "Printing photo: <document>".

Main function:

Create instances of both Printer and PhotoPrinter.

Store them in a list (e.g., std::vector<Printer*>).

Iterate through the list and call print_document to demonstrate polymorphism.

Example

Input:

Printer with "Text Document"

PhotoPrinter with "Photo Document"

Output:

Printing: Text Document  
Printing photo: Photo Document 