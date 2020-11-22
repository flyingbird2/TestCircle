//
// Created by 小灰灰 on 2020/11/22.
//

//#ifndef TESTCIRCLE_CIRCLE_H
//#define TESTCIRCLE_CIRCLE_H
//#pragma once
_Pragma("once")

class Circle {
    double radius;
public:
    Circle();

    Circle(double radius_);

    double getArea();

    void setRadius(double radius_) {
        radius = radius_;
    }

    double getRadius();
};

//#endif //TESTCIRCLE_CIRCLE_H
