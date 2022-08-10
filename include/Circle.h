#pragma once
#include "Shape.h"

class Circle : virtual public Shape {
    double radius = 0;
public:
    Circle (double _radius);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};