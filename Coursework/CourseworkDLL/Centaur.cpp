#include <iostream>
#include <string>
#include <cmath>
#include "Centaur.h"

Centaur::Centaur() : Land_Vehicle("Кентавр", 15, time_before_rest, duration_rest) {}

double Centaur::race(double distance, Centaur x) {
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
	duration_rest = x.follow_up_duration_rest * count_rest;
	return time_without_rest + duration_rest;
}