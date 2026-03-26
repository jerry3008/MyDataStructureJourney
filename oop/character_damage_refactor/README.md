# Character Damage Refactor (C++)

This task focuses on refactoring procedural code into a more structured Object-Oriented Programming design.
The original code computes the total damage dealt by a character named "Arin" during an adventure.


## Objective

Refactor the provided procedural implementation into a class-based design that improves organization, clarity, and maintainability.

The refactored solution should:

- Use classes to represent character and encounter details
- Encapsulate related data and behavior
- Provide methods for calculating total damage
- Improve readability and extensibility


## Design Focus

The refactor should emphasize key OOP principles:

- Encapsulation of character data and behavior
- Separation of responsibilities between classes
- Improved maintainability through structured design

Possible classes may include:

- A class for the character
- A class for encounters or enemies
- A class or method responsible for total damage calculation


## Expected Outcome

After refactoring, the code should demonstrate:

- Cleaner class-based architecture
- Better grouping of related logic
- Less reliance on procedural flow
- Easier future extension, such as adding new encounter types or damage rules


## Why This Matters

Procedural code can become harder to manage as game logic grows.

Applying OOP helps:

- Keep logic organized
- Make responsibilities clear
- Improve code reuse
- Support future gameplay extensions


## Build and Run


g++ -std=c++17 oop/character_damage_refactor/main.cpp -o character_damage
./character_damage