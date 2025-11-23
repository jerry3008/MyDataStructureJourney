# Student Gradebook System (C++)

This project defines a **Student Gradebook System** for managing grades across multiple subjects for each student.  
Grades can be added, updated, retrieved, deleted, and exported in CSV format. The system also supports computing statistical information across all recorded grades.

---

## Overview

Each student is uniquely identified by a `student_id` (`std::string`).  
Each student may have multiple grades stored by `subject` (`std::string`) with a value of type `double`.

The system supports:
- Adding and updating grades  
- Retrieving grades  
- Deleting grades  
- Computing aggregate statistics  
- Exporting all data in CSV format  

---

## Methods to Implement

### 1. `void add_grade(const std::string& student_id, const std::string& subject, double grade)`
Adds or updates the grade for a student and subject combination.

#### Example
```cpp
add_grade("S1", "Math", 92.5);
add_grade("S1", "Math", 95.0);  // Updates Math grade
2. std::optional<double> get_grade(const std::string& student_id, const std::string& subject) const
Returns the grade for the given student and subject.
Returns std::nullopt if the student or subject does not exist.

3. bool delete_grade(const std::string& student_id, const std::string& subject)
Removes the grade for the specified student and subject.
Returns:

true if successfully removed

false if no such record exists

Extended Functionality
4. std::map<std::string, double> get_statistics() const
Computes aggregated grade statistics across all students and subjects.

The returned map contains:

Key	Meaning
"number_of_students"	Total count of unique students
"average_grade"	Average of all grades
"highest_grade"	Maximum grade value
"lowest_grade"	Minimum grade value

Output Format
cpp
Copy code
{
    {"number_of_students", double},
    {"average_grade", double},
    {"highest_grade", double},
    {"lowest_grade", double}
}
Notes:

"number_of_students" should be returned as a double for consistency with map typing.

If there are no grades, your implementation must decide how to represent averages and min/max, but the structure must remain consistent.

5. std::string format_as_csv() const
Returns the entire gradebook formatted as CSV text.

Each row must follow this exact format:

Copy code
student_id,subject,grade
After all grade rows, append a final row containing:

Copy code
number_of_students,average_grade,highest_grade,lowest_grade
Formatting Requirements
Use std::fixed and std::setprecision(2) for all grade values.

Use std::setprecision(0) for "number_of_students".

Example Output
javascript
Copy code
S1,Math,95.00
S1,English,88.50
S2,Math,76.25
2,86.58,95.00,76.25
Example Workflow
cpp
Copy code
Gradebook gb;

gb.add_grade("S1", "Math", 90.0);
gb.add_grade("S1", "English", 85.0);
gb.add_grade("S2", "Math", 78.0);

auto g = gb.get_grade("S1", "English");  
// → 85.0

gb.delete_grade("S2", "Math");

auto stats = gb.get_statistics();
// → number_of_students: 1
// → average_grade: 87.5
// → highest_grade: 90.0
// → lowest_grade: 85.0

std::string csv = gb.format_as_csv();
Expected Behavior
Operation	Result
add_grade	Inserts or updates grade
get_grade	Returns grade or nullopt
delete_grade	Removes grade if exists
get_statistics	Computes grade-level aggregates
format_as_csv	Produces one CSV row per grade + one summary row

Complexity
Operation	Complexity
add_grade	O(1) average
get_grade	O(1) average
delete_grade	O(1) average
get_statistics	O(n)
format_as_csv	O(n)

Build and Run
bash
Copy code
g++ -std=c++17 hashing/student_gradebook/main.cpp -o student_gradebook
./student_gradebook
Notes
Use nested std::unordered_map<std::string, std::unordered_map<std::string, double>> for storage.

Use std::fixed and std::setprecision carefully to match CSV formatting requirements.

Ensure ordering of rows in CSV remains deterministic if required (e.g., lexicographical ordering of student IDs and subjects).