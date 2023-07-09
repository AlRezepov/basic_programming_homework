#pragma once

#include <string>
#include "Land Vehicle.h"

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API All_Terrain_Boots : public Land_Vehicle
{
public:
	All_Terrain_Boots();
	double race(double distance, All_Terrain_Boots x);

private:
	int time_before_rest = 60;
	int furst_duration_rest = 10;
	int follow_up_duration_rest = 5;
};
