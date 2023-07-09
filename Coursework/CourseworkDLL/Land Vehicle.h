#pragma once

#include <string>
#include "Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API  Land_Vehicle : public Vehicle
{
public:
	Land_Vehicle(std::string name, int speed, int time_before_rest, int duration_rest);

protected:
	int time_before_rest;
	int duration_rest;
};