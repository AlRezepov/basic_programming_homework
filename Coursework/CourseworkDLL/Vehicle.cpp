#include <iostream>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle(std::string type, std::string name, int speed) {
	this->type = type;
	this->name = name;
	this->speed = speed;
}