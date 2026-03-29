# Logger Versioning (C++)

This task enhances a Logger class by introducing version-controlled logging behavior.
Version 1 supports basic text logging, while Version 2 adds severity levels such as INFO, WARNING, and ERROR.



## Objective

Implement a `Logger` class that supports two logging interfaces:

- Version 1:
  - Logs plain text messages

- Version 2:
  - Logs messages prefixed with a severity level
  - Example:
    ```
    ERROR: Disk space low
    ```

The class should provide a method:
set_version(int version_number)

to switch between logging modes.

Functional Requirements
Version 1
Log basic text messages without severity labels
Version 2
Log messages with severity levels:
INFO
WARNING
ERROR
Version Switching
set_version(1) enables version 1 behavior
set_version(2) enables version 2 behavior

Any other value should raise a runtime error with:

Invalid version number
Version Safety

If version 1 is active and log_v2 is called, print:

Error: log_v2 method is only available in version 2
Storage Constraint
Store messages in a vector instead of writing to a file
The total combined length of all logged messages must not exceed 500 characters
Design Focus
Encapsulation of logger behavior
Version-based feature control
Backward compatibility
Safe interface usage
Constraint enforcement
Expected Outcome

After implementation, the logger should:

Support both v1 and v2 behavior
Switch behavior dynamically through set_version
Enforce valid version numbers
Prevent misuse of version-specific methods
Respect the 500-character total log size constraint
Key Concepts
Method versioning
Controlled feature exposure
Runtime validation
Message formatting
Encapsulation of internal log storage
Build and Run
g++ -std=c++17 oop/logger_versioning/main.cpp -o logger_versioning
./logger_versioning