#pragma once

#include <string>
#include "Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif


class COURSEWORK_API Air_Vehicle : public Vehicle
{
public:
	Air_Vehicle(std::string name, int speed, int distance_reduction_coefficient);

protected:
	int distance_reduction_coefficient;
};