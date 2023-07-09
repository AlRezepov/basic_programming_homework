#pragma once

#include <string>
#include "Land Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Fast_Camel : public Land_Vehicle
{
public:
	Fast_Camel();
	double race(double distance, Fast_Camel x);

private:
	int time_before_rest = 10;
	int furst_duration_rest = 5;
	double second_duration_rest = 6.5;
	int follow_up_duration_rest = 8;
};
