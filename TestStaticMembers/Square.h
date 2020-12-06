#pragma once

class Square {
private:
    double side;
    static int numObjects;
public:
    Square() : Square(1.0) {};

    Square(double side) {
        this->side = side;
        numObjects++;
    }

    static int getNumObjects() {
        return numObjects;
    }

    int getNumObjectsNonStatic() {
        return numObjects;
    }
};