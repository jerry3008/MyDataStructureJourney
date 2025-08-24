FileSystem – In-Memory Directories & Files
Task

Design a FileSystem class to manage directories and files via POSIX-style paths.

Methods

bool add_directory(const std::string& path)
Create a directory at path. Return false if it already exists; true on success.

bool add_file(const std::string& path, const std::string& content)
Create a file with content at path. Return false if it already exists; true on success.

std::optional<std::string> get_content(const std::string& path)
Return file content if path is a file; otherwise std::nullopt.

bool delete_item(const std::string& path)
Delete a file or directory (directory delete should remove its subtree). Return false if not found; true on success.

Path Rules (assumptions)

Absolute paths starting with / (e.g., /dir/sub/file.txt).

Directory and file names are non-empty, no duplicate names in the same directory.

Intermediate directories must exist to add a file/dir (unless you choose to auto-create—state behavior).

Root / always exists and cannot be deleted.

Examples

add_directory("/dirA") → true

add_file("/dirA/file1.txt", "Hello, World!") → true

get_content("/dirA/file1.txt") → "Hello, World!"

delete_item("/dirA/file1.txt") → true

get_content("/dirA/file1.txt") → std::nullopt

Constraints

Names and content are standard ASCII strings.

Reasonable limits (e.g., total items ≤ 10,000) — you may enforce as needed.

Operations should be at least O(depth) where depth is number of path segments