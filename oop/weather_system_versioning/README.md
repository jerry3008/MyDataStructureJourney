oop/weather_system_versioning/README.md

# Weather System Versioning (C++)

This task enhances a weather information system by introducing versioned weather summaries using Object-Oriented Programming principles.

The system supports multiple versions of a weather summary while maintaining a unified interface.

---

## Objective

Implement a `WeatherSystem` class that provides weather summaries through a single method:


getWeatherSummary(int version)


Depending on the version parameter, the method should return:

- Version 1 (v1):  
  - High temperature  
  - Low temperature  

- Version 2 (v2):  
  - High temperature  
  - Low temperature  
  - Chance of precipitation  
  - Wind speed  

---

## Design Focus

This task emphasizes:

- Encapsulation of weather data
- Clean API design using a single access point