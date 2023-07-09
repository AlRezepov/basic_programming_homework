#include <iostream>
#include <string>
#include <cmath>
#include "Broom.h"

Broom::Broom() : Air_Vehicle("Метла", 20, distance_reduction_coefficient) {}

double Broom::race(double& distance, Broom x) {
	distance_reduction_coefficient = distance / 1000;
	double new_distance = distance * (1.00 - (distance_reduction_coefficient / 100.00));
	return new_distance / x.speed;
}