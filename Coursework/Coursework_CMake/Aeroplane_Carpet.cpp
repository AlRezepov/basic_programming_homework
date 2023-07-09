#include <iostream>
#include <string>
#include <cmath>
#include "Aeroplane Carpet.h"

Aeroplane_carpet::Aeroplane_carpet() : Air_Vehicle("Ковёр-самолёт", 10, distance_reduction_coefficient) {}

double Aeroplane_carpet::race(double& distance, Aeroplane_carpet x) {
	double time_race = distance / x.speed;
	if (distance < 1000)
	{
		distance_reduction_coefficient = 0;
		return time_race;
	}
	if (distance < 5000)
	{
		distance_reduction_coefficient = x.distance_reduction_coefficient_down_5000;
		double new_distance = distance * (1.00 - (distance_reduction_coefficient / 100.00));
		return new_distance / x.speed;
	}
	if (distance < 10000)
	{
		distance_reduction_coefficient = x.distance_reduction_coefficient_down_10000;
		double new_distance = distance * (1.00 - (distance_reduction_coefficient / 100.00));
		return new_distance / x.speed;
	}
	if (distance >= 10000)
	{
		distance_reduction_coefficient = x.distance_reduction_coefficient_up_10000;
		double new_distance = distance * (1.00 - (distance_reduction_coefficient / 100.00));
		return new_distance / x.speed;
	}
}