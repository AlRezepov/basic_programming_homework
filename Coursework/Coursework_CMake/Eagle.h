#pragma once

#include "Air Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Eagle : public Air_Vehicle
{
public:
	Eagle();
	double race(double& distance, Eagle x);

private:
	int distance_reduction_coefficient = 6;
};