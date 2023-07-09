#pragma once

#include "Air Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Aeroplane_carpet : public Air_Vehicle
{
public:
	Aeroplane_carpet();
	double race(double& distance, Aeroplane_carpet x);

private:
	int distance_reduction_coefficient_down_5000 = 3;
	int distance_reduction_coefficient_down_10000 = 10;
	int distance_reduction_coefficient_up_10000 = 5;
};