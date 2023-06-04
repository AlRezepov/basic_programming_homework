#pragma once
#include <iostream>
#include <string>
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B);
};