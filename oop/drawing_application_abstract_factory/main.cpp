#include "DrawingApplication.hpp"

int main() {
    DrawingFactory* factory = nullptr;
    std::string drawingType = "Geometric"; // Change to "Artistic" to see Artistic setup

    if (drawingType == "Geometric") {
        factory = new GeometricFactory();
    } else if (drawingType == "Artistic") {
        factory = new ArtisticFactory();
    }

    if (factory) {
        DrawingApplication* app = new DrawingApplication(factory);
        app->render();

        delete app;
        delete factory;
    } else {
        std::cout << "Unknown drawing type." << std::endl;
    }

    return 0;
}