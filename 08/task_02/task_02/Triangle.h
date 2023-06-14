#pragma once
#include <iostream>
#include <string>
#include "Error.h"

class Triangle
{
public: 
	Triangle(std::string name, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
	virtual void print_info();

protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int angle_A;
	int angle_B;
	int angle_C;
};

