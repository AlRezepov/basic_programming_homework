#pragma once
#include <iostream>
#include <string>
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
	void print_info() override;
};