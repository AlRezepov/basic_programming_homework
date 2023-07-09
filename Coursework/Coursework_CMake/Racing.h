#pragma once

#include <string>
#include <vector>

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif


void COURSEWORK_API land_racing(bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, std::vector <double>& land_vehicle_result, double distance);
void COURSEWORK_API air_racing(bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <double>& air_vehicle_result, double& distance);
void COURSEWORK_API land_air_racing(bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <double>& land_air_vehicle_result, double distance);