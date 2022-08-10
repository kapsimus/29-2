#pragma once
#include <iostream>

const double PI = 3.1415;

struct BoundingBoxDimensions {
    double width;
    double height;
};

class Shape {
public:
    virtual double square() = 0;
    virtual BoundingBoxDimensions dimensions() = 0;
    virtual std::string type() = 0;
};