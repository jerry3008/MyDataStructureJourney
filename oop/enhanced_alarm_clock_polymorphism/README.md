- Stores and returns the alarm time in `"HH:MM"` format

### Subclass: EnhancedAlarmClock
Adds:
- Sound type setting
- Volume level setting
- Extended settings display

Defaults:
- Sound type: `beep`
- Volume level: `medium`


## Output Format

The method `getSettings()` should return a string exactly in this form:

Alarm Time: 06:45, Sound: digital, Volume: high
Validation Rules
Supported sound types
beep
ring
digital

If an invalid sound is provided, output:

Unsupported sound type
Supported volume levels
low
medium
high

If an invalid volume is provided, output:

Unsupported volume level
Design Focus
Inheritance and polymorphism
Backward compatibility
Method extension without modifying the base class
Encapsulation of new alarm settings
Expected Outcome

After implementation, the system should:

Preserve original AlarmClock functionality
Extend behavior through EnhancedAlarmClock
Support configurable sounds and volumes
Enforce valid input values
Return settings in the required format
Key Concepts
Inheritance
Polymorphism
Method extension
Backward compatibility
Input validation
Build and Run
g++ -std=c++17 oop/enhanced_alarm_clock_polymorphism/main.cpp -o enhanced_alarm_clock
./enhanced_alarm_clock

Notes
This task belongs under OOP.
Do not alter the original AlarmClock behavior.
Focus on extending functionality through subclassing.
Ensure the required default values and validation rules are respected.