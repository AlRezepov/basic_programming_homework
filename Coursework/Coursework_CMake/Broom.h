#pragma once

#include "Air Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Broom : public Air_Vehicle
{
public:
	Broom();
	double race(double& distance, Broom x);

private:
	int distance_reduction_coefficient;
};