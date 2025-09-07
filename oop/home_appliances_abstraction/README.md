Home Appliances Abstraction (Refrigerator & Oven)
Task

Create an abstract base class Appliance that defines a common interface for home appliances, then implement two concrete classes: Refrigerator and Oven.

Requirements

Define an abstract class Appliance with at least:

Pure virtual method: std::string start() — turn the appliance on / begin operation.

Pure virtual method: std::string stop() — turn the appliance off / end operation.

(Optional) Pure virtual: std::string status() const — report current state.

Implement:

Refrigerator (e.g., supports cooling on/off).

Oven (e.g., supports heating on/off).

Demonstrate polymorphism (e.g., std::vector<std::unique_ptr<Appliance>> and call start/stop).

Keep interfaces cohesive and reusable; no I/O beyond simple demonstration strings in main.

Constraints

Use pure virtual functions for abstraction (no concrete Appliance instances).

Follow RAII and avoid raw owning pointers where practical.

Keep the design minimal but extensible (e.g., adding WashingMachine later should be easy).

Example (behavioral intent)

Refrigerator::start() → "Refrigerator started cooling."

Oven::start() → "Oven preheating started."

Appliance* a = new Oven(); a->stop(); → "Oven turned off."

# Home Appliances Abstraction (C++)

## Goal
Model a unified interface for home appliances using abstraction and polymorphism.

## Requirements
- Abstract class `Appliance` with pure virtual methods:
  - `std::string start()`
  - `std::string stop()`
  - (Optional) `std::string status() const`
- Concrete implementations:
  - `Refrigerator`
  - `Oven`
- Demonstrate polymorphism by storing appliances via base-class interface and invoking `start/stop`.

## Constraints
- Use pure virtual functions (no direct `Appliance` instantiation).
- Favor smart pointers for ownership.
- Keep the API minimal and consistent across appliances.

## Example (intended outputs)
- Refrigerator: `"Refrigerator started cooling."`, `"Refrigerator turned off."`
- Oven: `"Oven preheating started."`, `"Oven turned off."`

## Notes
This design allows adding new appliances (e.g., `WashingMachine`, `Dishwasher`) by only implementing the `Appliance` interface.
