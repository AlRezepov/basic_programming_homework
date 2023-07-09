#pragma once

#include <string>

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

class COURSEWORK_API Vehicle
{
public:
	Vehicle(std::string type, std::string name, int speed);

protected:
	std::string type;
	std::string name;
	int speed;
};