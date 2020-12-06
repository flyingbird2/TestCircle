#include <iostream>
#include "Square.h"

int Square::numObjects;

int main() {
    Square s1;
    std::cout << s1.getNumObjects() << std::endl;
    Square s2;
    std::cout << s2.getNumObjects() << std::endl;
    std::cout << s2.getNumObjectsNonStatic() << std::endl;
    return 0;
}