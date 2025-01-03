cmake_minimum_required(VERSION 3.0)

project(hw_02_06_3 VERSION 1.0 LANGUAGES CXX)


set(PROJECT_SOURCES
main.cpp
equilateraltriangle.cpp 
equilateraltriangle.h 
figure.cpp 
figure.h 
isoscelestriangle.cpp 
isoscelestriangle.h 
parallelogramm.cpp 
parallelogramm.h 
quadrangle.cpp 
quadrangle.h 
rectangle.cpp 
rectangle.h
rectangular.cpp 
rectangular.h 
romb.cpp 
romb.h 
square.cpp 
square.h 
triangle.cpp 
triangle.h
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

