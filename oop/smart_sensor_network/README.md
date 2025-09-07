# Smart Sensor Network (C++ OOP)

## Goal
Showcase abstraction and inheritance with a smart device network focused on sensors.

## Design
- `SmartDevice` (abstract)
  - `power_on()`, `power_off()`, `is_on() const`
  - `virtual double read() const = 0`
  - `virtual void adjust(double value) = 0`
- `Sensor` (abstract, derives from `SmartDevice`)
  - Common sensor state & helpers
- `TemperatureSensor` (concrete)
  - Calibration factor applied to the base temperature
  - `adjust(value)` updates calibration
  - `read()` returns calibrated temperature
- `MotionSensor` (concrete)
  - Sensitivity managed via power states and `adjust(value)`
  - `read()` returns current sensitivity (simulated motion signal)

## Example behaviors
- Temperature:
  - base = 25.0°C, calibration = 1.02 ⇒ `read()` ≈ 25.5
- Motion:
  - sensitivity = 0.7 ⇒ `read()` = 0.7

## Notes
- Keep interfaces minimal and cohesive.
- Demonstrate polymorphism via base-class pointers.
