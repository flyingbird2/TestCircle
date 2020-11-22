#include <iostream>

class Circle {
    double radius;


public:
    double getArea() {
        return 3.14 * radius * radius;
    }

public:
    Circle() {
        radius = 1.0;
    }

    Circle(double r) {
        radius = r;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Circle c1;
    std::cout << c1.getArea() << std::endl;
    Circle c2{2.0};
    std::cout << c2.getArea() << std::endl;
    return 0;
}