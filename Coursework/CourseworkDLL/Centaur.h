#pragma once

#include <string>
#include "Land Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Centaur : public Land_Vehicle
{
public:
	Centaur();
	double race(double distance, Centaur x);

private:
	int time_before_rest = 8;
	int follow_up_duration_rest = 2;
};