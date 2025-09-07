#include "main.hpp"

// TODO: Implement the TemperatureSensor class methods: power_on, power_off, 
// where power_on should activate it, set active to true in power_on, false in power_off. 
// Also iImplement read_data, returning 20.0 multiplied by calibration_factor.
TemperatureSensor::TemperatureSensor(double calibration_factor): calibration_factor(calibration_factor), active(false) {}

void TemperatureSensor::power_on() {
    active = true;
}
void TemperatureSensor::power_off() 
{
    active = false;
}
double TemperatureSensor::read_data() const
{
    return 20.0 * calibration_factor;
}


// TODO: Implement the MotionSensor class methods: power_on, power_off, 
// where power_on should set sensitivity to 5, in power_off set it to 0. 
// Also implement read_data to simulate motion detection returning the sensitivity.

void MotionSensor::power_on() 
{
    sensitivity = 5;
}
void MotionSensor::power_off() 
{
    sensitivity = 0;
}
double MotionSensor::read_data() const
{
    return sensitivity;
}


int main() {
    TemperatureSensor temp_sensor(1.1);
    MotionSensor motion_sensor;

    // Test TemperatureSensor functionality
    temp_sensor.power_on();
    std::cout << "Temperature Sensor reading: " << temp_sensor.read_data() << std::endl;

    // Test MotionSensor functionality
    motion_sensor.power_on();
    std::cout << "Motion Sensor reading: " << motion_sensor.read_data() << std::endl;

    return 0;
}