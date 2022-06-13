cmake_minimum_required(VERSION 3.22)
project(CppDevTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppDevTest Exercise1/FirstExercise.cpp Exercise2/SecondExercise.cpp Exercise1/ArmSelector.h Exercise1/ArmSelector.cpp)
