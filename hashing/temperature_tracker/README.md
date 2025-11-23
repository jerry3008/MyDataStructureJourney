# Temperature Tracker System (C++)

This project defines a **Temperature Tracking System** that stores, retrieves, deletes, aggregates, and formats temperature data for multiple cities.  
Each city may contain multiple temperature records, and the system must treat city names in a case-insensitive manner.

---

## Overview

Cities are represented by `std::string`, and each city can have several temperature records (`double`).  
The system supports basic CRUD operations, as well as extended functionality for computing averages and formatting temperature output.

All temperature values in formatted output must display **one decimal place**.

---

## Methods to Implement

### 1. `void add_temperature(const std::string& city, double temp)`
Adds a temperature record for a given city.  
If the city already exists, append the new temperature to the vector.  
City names must be stored and matched in a case-insensitive manner.

#### Example:
```cpp
add_temperature("new york", 75.5);
add_temperature("NEW YORK", 77.2);
// Stored internally as: "new york": [75.5, 77.2]
2. std::vector<double> get_temperatures(const std::string& city)
Returns all temperatures recorded for a city.
Returns an empty vector if the city does not exist.

3. bool delete_temperatures(const std::string& city)
Deletes all temperature records for the specified city.
Returns:

true if deletion occurred

false if the city does not exist

Advanced Functionalities
4. std::optional<double> average_temperature(const std::string& city)
Computes the average temperature for a city.
Returns:

A double with one decimal place

std::nullopt if the city has no records

Example:
cpp
Copy code
average_temperature("new york"); // → 76.4
5. std::string format_all_temperatures(double min_temp)
Returns a formatted string containing:

A list of cities with temperatures greater than or equal to min_temp

Aggregated statistics

Output Format:
yaml
Copy code
Cities: [city1: [t1, t2], city2: [t1], ]
Statistics:
- Total Cities: X
- Total Records: Y
Formatting Rules
Cities must be displayed in lowercase.

Temperatures formatted with one decimal place.

Only temperatures >= min_temp appear in the list.

Only cities with at least one matching temperature appear.

Trailing comma after each city block is acceptable and required to match the reference output.

Example:
Given:

less
Copy code
New York: [75.5, 77.2]
Los Angeles: [80.0]
Chicago: [72.0]
Calling:

cpp
Copy code
format_all_temperatures(74.0);
Produces:

yaml
Copy code
Cities: [los angeles: [80.0], new york: [75.5, 77.2], ]
Statistics:
- Total Cities: 2
- Total Records: 3
Case-Insensitive Requirements
All city names must be treated case-insensitively for:

Adding records

Retrieving records

Deleting records

Aggregation

Formatted output

The internal key used for storage should be the lowercase version of the city name.

Expected Behavior
Operation	Result
add_temperature	Creates or appends to a city's record
get_temperatures	Returns vector or empty vector
delete_temperatures	Removes city entry if exists
average_temperature	Computes average or returns nullopt
format_all_temperatures	Produces a formatted multi-line string

Complexity
Operation	Complexity
add_temperature	O(1) average
get_temperatures	O(1) average
delete_temperatures	O(1) average
average_temperature	O(n)
format_all_temperatures	O(n)

Where n is the number of temperature records across all cities.

Build and Run
bash
Copy code
g++ -std=c++17 hashing/temperature_tracker/main.cpp -o temperature_tracker
./temperature_tracker

Notes

Use std::unordered_map<std::string, std::vector<double>> for city storage.

Convert all input city names to lowercase before storing or searching.

Use std::fixed and std::setprecision(1) for temperature output formatting.

Ensure output formatting matches the required structure exactly.