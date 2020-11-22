cmake_minimum_required(VERSION 3.15)
project(TestCircle)

set(CMAKE_CXX_STANDARD 14)


add_executable(TestCircle TestObjectAsReturnValue/Main.cpp TestSeperateDeclareAndImpl/Circle.h TestSeperateDeclareAndImpl/Circle.cpp)