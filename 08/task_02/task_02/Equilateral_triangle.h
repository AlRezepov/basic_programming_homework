#pragma once
#include <iostream>
#include <string>
#include "Triangle.h"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
	void print_info() override;
};