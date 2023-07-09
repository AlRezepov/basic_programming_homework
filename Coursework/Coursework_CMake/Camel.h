#pragma once

#include <string>
#include "Land Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Camel : public Land_Vehicle
{
public:
	Camel();
	double race(double distance, Camel x);

private:
	int time_before_rest = 30;
	int furst_duration_rest = 5;
	int follow_up_duration_rest = 8;
};
