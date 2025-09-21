# Document Editor

## Task
Implement a simple **Document** class to manage text content while keeping the content private.

### Requirements
- **Private Member**
  - `std::string content` — holds the document's text and cannot be accessed directly.

- **Public Methods**
  - `void add_content(const std::string& text)`  
    - Appends new text to the document content.
  - `void display_content() const`  
    - Prints the current content to the console.

- Demonstrate the class in `main()`:
  - Create a `Document` object.
  - Add multiple text entries using `add_content`.
  - Call `display_content` to show the full text.

### Example
```cpp
Document doc;
doc.add_content("Hello, ");
doc.add_content("world!");
doc.display_content();   // Output: Hello, world!
Constraints
All direct access to content must remain private.

Concatenation order must preserve input sequence.

Total content length ≤ 10,000 characters.

File Layout
main.cpp: Implements the Document class and demonstrates usage.