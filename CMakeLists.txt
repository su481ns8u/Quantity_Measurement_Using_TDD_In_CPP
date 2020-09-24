cmake_minimum_required(VERSION 3.15.3)

project(QuantityMeasurementCPP)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests 
    src/Length.cpp
    src/Length.hpp
    src/Unit.cpp
    src/Unit.hpp
    tst/quantityMeasurementTest.cpp
)

target_link_libraries(executeTests PRIVATE gtest)