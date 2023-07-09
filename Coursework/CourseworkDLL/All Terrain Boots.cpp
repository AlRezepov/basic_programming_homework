#include <iostream>
#include <string>
#include <cmath>
#include "All Terrain Boots.h"

All_Terrain_Boots::All_Terrain_Boots() : Land_Vehicle("Ботинки-вездеходы", 6, time_before_rest, duration_rest) {}

double All_Terrain_Boots::race(double distance, All_Terrain_Boots x) {
	double time_without_rest = distance / x.speed;
	int count_rest;
	if (time_without_rest <= x.time_before_rest)
	{
		return time_without_rest;
	}
	if (std::fmod(time_without_rest, x.time_before_rest) == 0)
	{
		count_rest = (static_cast<int>(time_without_rest) / x.time_before_rest) - 1;
	}
	else
	{
		count_rest = static_cast<int>(time_without_rest) / x.time_before_rest;
	}
	duration_rest = x.furst_duration_rest + (x.follow_up_duration_rest * (count_rest - 1));
	return time_without_rest + duration_rest;
}