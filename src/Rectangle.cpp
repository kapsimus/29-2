#include "Rectangle.h"

Rectangle::Rectangle(double _a, double _b) {
    if (_a <= 0 || _b <= 0) {
        std::cout << "Incorrect parameters." << std::endl;
    } else {
        a = _a;
        b = _b;
    }
}
double Rectangle::square() {
    return a * b;
}

BoundingBoxDimensions Rectangle::dimensions() {
    BoundingBoxDimensions boxDimensions;
    boxDimensions.width = a;
    boxDimensions.height = b;
    return boxDimensions;
}

std::string Rectangle::type() {
    return "Rectangle";
}