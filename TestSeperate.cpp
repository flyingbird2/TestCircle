#include <iostream>

#include "seperateDeclareAndImpl/Circle.h"
#include "seperateDeclareAndImpl/Circle.h"

int main() {
    Circle c1, c2{3.0};
    std::cout << c1.getArea() << std::endl;
    std::cout << c2.getArea() << std::endl;
}