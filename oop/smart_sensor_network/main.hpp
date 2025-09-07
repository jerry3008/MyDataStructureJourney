#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>

// TODO: Define a class named SmartDevice with two virtual methods, power_on and power_off
class SmartDevice
{
  public:
  virtual void power_on()  = 0;
  virtual void power_off()  = 0;
    
};

// TODO: Define a class named Sensor that inherits from SmartDevice and adds a pure virtual method read_data
class Sensor: public SmartDevice
{
    public:
    virtual double read_data() const = 0;
    
};


// TODO: Implement TemperatureSensor class. Initialize with calibration_factor, and define power_on, power_off, and read_data.
// Use a standard temperature of 20.0 degrees, adjust using calibration_factor.
class TemperatureSensor: public Sensor
{
    public:
    TemperatureSensor(double calibration_factor);
    void power_on()  override;
    void power_off()  override;
    double read_data() const override;
    private:
    double calibration_factor;
    bool active;
};

// TODO: Implement MotionSensor class.
// Override power_on, set sensitivity level, define power_off, and read_data to simulate motion detection.
class MotionSensor: public Sensor
{
    public:
    void power_on()  override;
    void power_off()  override;
    double read_data() const override;
    
    private:
    int sensitivity;
    
};

#endif  // SOLUTION_HPP_