#include "Circle.h"

Circle::Circle(double _radius) {
    if (_radius <= 0) {
        std::cout << "Incorrect radius." << std::endl;
    } else {
        radius = _radius;
    }
}
double Circle::square() {
    return PI * radius * radius;
}

BoundingBoxDimensions Circle::dimensions() {
    BoundingBoxDimensions boxDimensions;
    boxDimensions.height = boxDimensions.width = radius * 2;
    return boxDimensions;
}

std::string Circle::type() {
    return "Circle";
}