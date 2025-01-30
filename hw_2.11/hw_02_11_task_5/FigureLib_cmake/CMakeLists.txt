cmake_minimum_required(VERSION 3.0)
project(hw_02_11_5 VERSION 1.0 LANGUAGES CXX)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(FigureLibDynamic SHARED 
figure.h 
figure.cpp 
finfo.h
finfo.cpp
triangle.h 
triangle.cpp 
quadrangle.h 
quadrangle.cpp 
equilateraltriangle.h 
equilateraltriangle.cpp 
isoscelestriangle.h 
isoscelestriangle.cpp 
parallelogramm.h 
parallelogramm.cpp 
rectangle.h
rectangle.cpp 
rectangular.h
rectangular.cpp 
romb.h  
romb.cpp 
square.h
square.cpp 
)
add_executable(FigureClientExe FigureClient.cpp)
target_link_libraries(FigureClientExe FigureLibDynamic)


