cmake_minimum_required(VERSION 3.0)

project(hw_02_06_1 VERSION 1.0 LANGUAGES CXX)


set(PROJECT_SOURCES
main.cpp
mathfun.h
mathfun.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

