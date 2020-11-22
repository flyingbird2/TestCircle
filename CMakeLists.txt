cmake_minimum_required(VERSION 3.15)
project(TestCircle)

set(CMAKE_CXX_STANDARD 14)


add_executable(TestCircle TestSeperate.cpp seperateDeclareAndImpl/Circle.h seperateDeclareAndImpl/Circle.cpp)