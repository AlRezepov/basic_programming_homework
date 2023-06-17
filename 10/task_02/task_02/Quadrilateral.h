#pragma once
#include <iostream>
#include <string>
#include "Error.h"

class Quadrilateral
{
public:
	Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
	virtual void print_info();

protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int side_d;
	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
};