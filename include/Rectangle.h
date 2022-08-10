#pragma once
#include "Shape.h"

class Rectangle : virtual public Shape {
    double a = 0, b = 0, c = 0;
public:
    Rectangle (double _a, double _b);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};