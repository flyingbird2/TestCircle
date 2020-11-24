#include <iostream>
#include "Circle.h"


int main() {

    Circle c1{1.0};
    std::cout << c1.setRadius(2.0).setRadius(3.0).getArea() << std::endl;
    return 0;
}