#include "main.hpp"

void CodeEditor::write() const {
    std::cout << "Writing code..." << std::endl;
}

void ProseEditor::write() const {
    std::cout << "Writing prose..." << std::endl;
}

// TODO: Implement EditorSuite constructor
EditorSuite::EditorSuite(){}

// TODO: Implement add_editor method to add a provided editor to the list
void EditorSuite::add_editor(TextEditor* editor) 
{
    editors.push_back(editor);
}

// TODO: Implement publish method to execute write function for each editor in the list
void EditorSuite::publish() const 
{
    for(const auto & editor  : editors)
    {
        editor  -> write();
    }
}

int main() {
    EditorSuite suite;
    suite.add_editor(new CodeEditor());
    suite.add_editor(new ProseEditor());
    
    suite.publish();

    return 0;
}