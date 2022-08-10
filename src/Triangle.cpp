#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double _a, double _b,double _c) {
    if ((_a >= _b + _c) || (_b >= _a + _c) || (_c >= _a + _b) || _a <= 0 || _b <= 0 || _c <= 0) {
        std::cout << "Incorrect parameters." << std::endl;
    } else {
        a = _a;
        b = _b;
        c = _c;
    }
}
double Triangle::square() {
    double p = (a + b + c) / 2.0;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

BoundingBoxDimensions Triangle::dimensions() {
    BoundingBoxDimensions boxDimensions;
    double p = (a + b + c) / 2.0;
    boxDimensions.width = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    boxDimensions.height = 2 * std::sqrt(p * (p - a) * (p - b) * (p - c)) / boxDimensions.width;
    return boxDimensions;
}

std::string Triangle::type() {
    return "Triangle";
}