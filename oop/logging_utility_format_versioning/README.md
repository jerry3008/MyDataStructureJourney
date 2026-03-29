# Logging Utility Format Versioning (C++)

This task enhances a C++ logging utility by introducing version-based logging behavior and support for multiple output formats.

The original version logs plain text messages only. The upgraded version supports both plain text and JSON-formatted log messages.

---

## Objective

Implement a logging utility class with a public attribute:
logVersion

This attribute determines which logging method should be used:

If logVersion == 1, use logMessageV1
If logVersion == 2, use logMessageV2
Functional Requirements
Version 1
Logs messages in plain text format only
Behavior should remain unchanged from the original implementation
Version 2
Supports:
Plain text logging
JSON logging
JSON Format Requirement

When JSON format is selected, the message must follow this exact structure:

{ "message": "<your log message>" }
Plain Text Requirement

When plain text format is selected in version 2, the output should behave the same way as version 1.

Design Focus
Version-controlled behavior
Backward compatibility
Support for multiple log output formats
Clean separation between logging versions
Consistent formatting rules
Expected Outcome

After implementation, the utility should:

Use logVersion to determine which method is active
Preserve version 1 plain text functionality
Extend version 2 to support both plain text and JSON
Ensure JSON logs always match the required structure exactly
Key Concepts
Method versioning
Format-based behavior
Encapsulation
Backward compatibility
Output consistency
Build and Run
g++ -std=c++17 oop/logging_utility_format_versioning/main.cpp -o logging_utility
./logging_utility


Notes
This task belongs under OOP.
Focus on clean version handling and format support.
Preserve the original behavior of version 1 while extending functionality in version 2.
Ensure JSON output matches the required format exactly.