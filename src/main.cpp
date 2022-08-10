#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void printParams(Shape *shape) {
    std::cout << "Type: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->square() << std::endl;
    std::cout << "Width: " << shape->dimensions().width << std::endl;
    std::cout << "Height: " << shape->dimensions().height << std::endl;
}

int main() {
    Circle c(5);
    printParams(&c);
    Triangle t(3, 4, 5);
    printParams(&t);
    Rectangle r(6, 7);
    printParams(&r);
    return 0;
}
