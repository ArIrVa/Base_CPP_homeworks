cmake_minimum_required(VERSION 3.0)

project(hw_02_06_2 VERSION 1.0 LANGUAGES CXX)


set(PROJECT_SOURCES
main.cpp
counter.h
counter.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

