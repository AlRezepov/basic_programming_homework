#include <iostream>
#include <string>
#include <cmath>
#include "Eagle.h"

Eagle::Eagle() : Air_Vehicle("Îð¸ë", 8, distance_reduction_coefficient) {}

double Eagle::race(double& distance, Eagle x) {
	double new_distance = distance * (1.00 - x.distance_reduction_coefficient / 100.00);
	return new_distance / x.speed;
}