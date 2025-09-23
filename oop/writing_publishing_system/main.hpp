#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>

// Base class for different types of Editors
class TextEditor {
public:
    virtual ~TextEditor() = default;
    virtual void write() const = 0;
    // TODO: Declare a virtual write method to be implemented by derived classes
};

// TODO: Define CodeEditor class inheriting from TextEditor
class CodeEditor: public TextEditor
{
  
  public:
  virtual void write()  const override;  
};

// TODO: Define ProseEditor class inheriting from TextEditor
class ProseEditor: public TextEditor
{
  
  public:
  virtual void write()  const override;  
};

// TODO: Define EditorSuite class that aggregates various editors with `add_editor` and `publish` methods
class EditorSuite
{
    std::vector<TextEditor*> editors;
  
  public:
  EditorSuite();  
    void add_editor(TextEditor* editor);
    
    void publish() const;
    ~EditorSuite() = default;
};


#endif  // SOLUTION_HPP_