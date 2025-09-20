# Aircraft System via Composition (C++)

## Task
Implement an aircraft system using **composition** to model the relationship  
*Aircraft has an AuxiliaryPowerUnit, a LightingSystem, and Avionics.*

The header file `solution.hpp` defines the required class declarations and TODOs.

### Classes to Implement
1. **AuxiliaryPowerUnit**
   - `void generate_power();`
   - Simulates starting the aircraft’s auxiliary power unit (APU).

2. **LightingSystem**
   - `void illuminate();`
   - Simulates turning on the aircraft lighting.

3. **Avionics**
   - `void navigation_systems_check();`
   - Simulates running avionics navigation checks.

4. **Aircraft**
   - Has **AuxiliaryPowerUnit**, **LightingSystem**, and **Avionics** as member objects.
   - `Aircraft();` — constructor to initialize components.
   - `void prepare_for_takeoff();` — calls the other components to power up and ready the aircraft.

## Expected Behavior
- `prepare_for_takeoff()` should:
  1. Start the auxiliary power unit by calling `generate_power()`.
  2. Activate lighting with `illuminate()`.
  3. Check avionics by calling `navigation_systems_check()`.
- The sequence ensures all systems are ready for takeoff.

## Constraints
- The APU, lighting, and avionics each output a message to `std::cout`.
- All code is contained within `solution.hpp` and `main.cpp` for testing.

## Example Flow
```cpp
Aircraft aircraft;
aircraft.prepare_for_takeoff();
