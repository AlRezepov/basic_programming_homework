cmake_minimum_required(VERSION 3.22.0)
project(my_second_cmake_project)

set (SOURCE_FILE task_02.cpp Rhombus.cpp Parallelogram.cpp Rectangle.cpp Square.cpp Equilateral_triangle.cpp Isosceles_triangle.cpp Rectangular_triangle.cpp Quadrilateral.cpp Triangle.cpp Error.cpp)

add_executable(my_second_cmake_project ${SOURCE_FILE})