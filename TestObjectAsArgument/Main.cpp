#include <iostream>
#include "Circle.h"

void print(Circle &c) {
    std::cout << c.getArea() << std::endl;
}

void print(Circle *c) {
    std::cout << c->getArea() << std::endl;
}

int main() {
    Circle c1[]{1., 2., 3.};
    print(c1[0]);
    //c1 + 2 是指针的运算
    print(c1 + 2);
    return 0;
}