#pragma once
#include <iostream>
#include <string>
#include "Triangle.h"
#include "Quadrilateral.h"

class Error : public std::domain_error
{
public:
	Error (const std::string& message);
};
