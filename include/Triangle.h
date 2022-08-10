#pragma once
#include "Shape.h"

class Triangle : virtual public Shape {
    double a = 0, b = 0, c = 0;
public:
    Triangle (double _a, double _b,double _c);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};