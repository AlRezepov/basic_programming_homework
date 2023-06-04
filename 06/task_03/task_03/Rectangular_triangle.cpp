#include <iostream>
#include <string>
#include "Rectangular_triangle.h"

Rectangular_triangle::Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle("Прямоугольный треугольник", side_a, side_b, side_c, angle_A, angle_B, 90) {}