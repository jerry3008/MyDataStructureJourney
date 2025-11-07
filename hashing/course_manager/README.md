# CourseManager System (C++ • Hashing)

Welcome, Explorer!  
This project implements a simple **Course Management System** that allows you to add, retrieve, update, filter, and aggregate information about online courses.

---

## 🧩 Overview
Each course is uniquely identified by a **course ID** (`std::string`) and stores:
- **name** (`std::string`)
- **instructor** (`std::string`)
- **duration** (in weeks, `int`)

You will design a `CourseManager` class to perform CRUD and analytical operations.

---

## ✅ Methods to Implement

### 1. `bool add_course(const std::string &course_id, const std::string &name, const std::string &instructor, int duration)`
- Adds a new course to the system.
- Returns `false` if the course already exists; otherwise, `true`.

#### Example:
```cpp
add_course("C101", "Python Basics", "Alice", 20);
// Returns true
add_course("C101", "Duplicate Course", "Alice", 30);
// Returns false (already exists)
2. std::optional<std::map<std::string, std::variant<std::string, int>>> get_course(const std::string &course_id)
Retrieves details for a given course as a map:

"name" → course name

"instructor" → instructor name

"duration" → number of weeks

Returns std::nullopt if not found.

Example:
cpp
Copy code
get_course("C101");
// Returns {"name": "Python Basics", "instructor": "Alice", "duration": 20}
3. bool update_course(const std::string &course_id, std::optional<std::string> name, std::optional<std::string> instructor, std::optional<int> duration)
Updates an existing course with any provided (non-null) parameters.

Returns true if updated, false if course not found.

Example:
cpp
Copy code
update_course("C101", "Advanced Python", std::nullopt, std::nullopt);
// Updates name to "Advanced Python"
4. std::vector<std::string> filter_courses(std::optional<int> min_duration, std::optional<int> max_duration, std::optional<std::string> instructor)
Returns a list of course IDs that match the specified filters:

Duration ≥ min_duration (if provided)

Duration ≤ max_duration (if provided)

Instructor name equals instructor (if provided)

If any filter is std::nullopt, it’s ignored.

Example:
cpp
Copy code
filter_courses(20, std::nullopt, std::nullopt);
// Returns IDs of courses with duration ≥ 20
5. std::map<std::string, std::variant<int, float>> aggregate_stats()
Returns high-level statistics of the entire course collection.

Output fields:
Key	Type	Description
"total_courses"	int	Number of courses in the system
"average_duration"	float	Average course duration (rounded to 1 decimal)

Example:
cpp
Copy code
aggregate_stats();
// Returns { "total_courses": 2, "average_duration": 22.5 }
⚙️ Example Workflow
cpp
Copy code
add_course("C101", "Python Basics", "Alice", 20);
add_course("C102", "Java Fundamentals", "Bob", 25);
add_course("C101", "Duplicate Course", "Alice", 30); // false

auto c1 = get_course("C101");
// → {"name": "Python Basics", "instructor": "Alice", "duration": 20}

update_course("C101", "Advanced Python", std::nullopt, std::nullopt);
// Updates only the name

filter_courses(20, std::nullopt, std::nullopt);
// → ["C101", "C102"]

aggregate_stats();
// → {"total_courses": 2, "average_duration": 22.5}
🧮 Complexity
Operation	Complexity
add_course	O(1) average
get_course	O(1) average
update_course	O(1) average
filter_courses	O(n)
aggregate_stats	O(n)

🏗️ Build & Run
bash
Copy code
g++ -std=c++17 hashing/course_manager/main.cpp -o course_manager
./course_manager
📝 Notes
Use std::unordered_map<std::string, Course> for storage.

Use std::variant for returning mixed-type fields (std::string + int).

Ensure average duration is rounded to one decimal using standard C++ rounding.

Keep all operations non-destructive — they should not alter other courses.