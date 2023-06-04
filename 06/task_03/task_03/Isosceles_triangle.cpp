#include <iostream>
#include <string>
#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle("Равнобедренный треугольник", side_a, side_b, side_a, angle_A, angle_B, angle_A) {}