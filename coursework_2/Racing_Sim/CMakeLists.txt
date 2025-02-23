cmake_minimum_required(VERSION 3.5)
project(Racing_Sim)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(PROJECT_SOURCES main.cpp)
set(LIBRARY_SOURCE RacingLibDynamic)
add_library(RacingLibDynamic SHARED 
race.h
race.cpp
ground_race.h
ground_race.cpp
air_race.h
air_race.cpp
transportmeans.h
transportmeans.cpp
registration.h
enum_classes.h
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_link_libraries(${PROJECT_NAME} ${LIBRARY_SOURCE})