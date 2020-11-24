#include <iostream>

class Circle {
    double radius;
public:
    double getArea() {
        return 3.14 * radius * radius;
    }

    Circle(double radius) {
        this->radius = radius;
    }

    //命令编译器添加默认构造函数
    Circle() = default;
};

class Square {
    double side;
public:
    double getArea() {
        return side * side;
    }

    //不允许编译器添加默认构造函数
    Square() = delete;

    Square(double side) {
        this->side = side;
    }
};

class Combo {
public:
    Circle c;
    Square s;

    Combo() : s{1.0} {

    }
};

int main() {
    Combo c{};
    std::cout << c.s.getArea();
    return 0;
}