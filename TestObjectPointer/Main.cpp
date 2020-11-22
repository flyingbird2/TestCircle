#include <iostream>
#include "Circle.h"

int main() {
    Circle *c1 = new Circle{2.0};
    std::cout << c1->getArea() << std::endl;
    //加括号是因为*与.的优先级的问题
    std::cout << (*c1).getArea() << std::endl;

    Circle c2{3.0};
    auto p2 = &c2;
    std::cout << p2->getArea() << std::endl;
    auto c5 = new Circle[3]{1.2, 2., 3.};
    for (int i = 0; i < 3; ++i) {
        std::cout << c5[i].getArea() << std::endl;
    }
    return 0;
}