#include <iostream>
#include "Circle.h"

int main() {
    Circle c1[]{1., 2., 3.};
    Circle c2[]{Circle{1.}, Circle{2.}, Circle{3.}};
    c1[0].setRadius(100.0);
    std::cout << c1[0].getArea() << std::endl;
    auto totalArea{0.0};
    for (int i = 0; i < sizeof(c2) / sizeof(c2[0]); i++) {
        totalArea += c2[i].getArea();
    }
    std::cout << totalArea << std::endl;
    return 0;
}