# Weather Service Adapter (C++)

This task extends a weather forecasting application by integrating a new detailed weather data provider while preserving backward compatibility with the existing `WeatherService` interface.

The solution should use the Adapter Pattern to bridge the old interface and the new provider without requiring changes to existing client code.


## Objective

Introduce a `WeatherServiceAdapter` class that allows the application to use a new weather data provider while keeping the same client-facing behavior expected from `WeatherService`.

The existing system provides:

getCurrentWeather()

which returns the current temperature in Celsius.

The new provider offers:

getDetailedWeather()

which returns a richer weather dataset including:

temperature
pressure
humidity
Sample Detailed Weather Data

For this task, the new provider can return mocked sample data such as:

{
    "temperature": 20,
    "pressure": 1013,
    "humidity": 75
}
Functional Requirements
Existing Class
WeatherService

Method:

getCurrentWeather()
Returns:
current temperature in Celsius
New Provider

Provides:

getDetailedWeather()
Returns:
temperature in Celsius
atmospheric pressure in hPa
humidity percentage
Adapter
New class:
WeatherServiceAdapter
Purpose:
adapt the new provider to the old WeatherService interface
preserve existing client usage
hide provider-specific complexity
Design Focus
Adapter Pattern
Backward compatibility
Encapsulation of integration logic
Minimal disruption to existing code
Seamless use of a richer data source
Expected Outcome

After implementation, the system should:

Preserve the original WeatherService behavior expected by clients
Use the new detailed provider internally through an adapter
Return compatible temperature data through the adapted interface
Support future extension for exposing richer weather details if needed
Key Concepts
Adapter Pattern
Interface compatibility
Encapsulation
Legacy system integration
Maintainable extension of existing systems
Build and Run
g++ -std=c++17 oop/weather_service_adapter/main.cpp -o weather_service_adapter
./weather_service_adapter
Notes
This task belongs under OOP.
Focus on adapting the new provider without modifying legacy client code.
The adapter should translate from the detailed provider interface to the simpler existing interface.
This design makes it easier to swap or add future weather providers.