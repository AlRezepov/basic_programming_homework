#pragma once
#include <iostream>
#include <string>
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int side_a, int side_b);
};