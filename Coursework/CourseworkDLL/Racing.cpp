
#include <string>
#include <vector>
#include "Camel.h"
#include "Fast Camel.h"
#include "Centaur.h"
#include "All Terrain Boots.h"
#include "Aeroplane Carpet.h"
#include "Eagle.h"
#include "Broom.h"
#include "Racing.h"

void land_racing(bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, std::vector <double>& land_vehicle_result, double distance) {
	if (camel)
	{
		Camel camel;
		land_vehicle_result.push_back(camel.race(distance, camel));
	}
	if (fast_camel)
	{
		Fast_Camel fast_camel;
		land_vehicle_result.push_back(fast_camel.race(distance, fast_camel));
	}
	if (centaur)
	{
		Centaur centaur;
		land_vehicle_result.push_back(centaur.race(distance, centaur));
	}
	if (all_terrain_boots)
	{
		All_Terrain_Boots all_terrain_boots;
		land_vehicle_result.push_back(all_terrain_boots.race(distance, all_terrain_boots));
	}
}

void air_racing(bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <double>& air_vehicle_result, double& distance) {
	if (aeroplane_carpet)
	{
		Aeroplane_carpet aeroplane_carpet;
		air_vehicle_result.push_back(aeroplane_carpet.race(distance, aeroplane_carpet));
	}
	if (eagle)
	{
		Eagle eagle;
		air_vehicle_result.push_back(eagle.race(distance, eagle));
	}
	if (broom)
	{
		Broom broom;
		air_vehicle_result.push_back(broom.race(distance, broom));
	}
}

void land_air_racing(bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <double>& land_air_vehicle_result, double distance) {
	if (camel)
	{
		Camel camel;
		land_air_vehicle_result.push_back(camel.race(distance, camel));
	}
	if (fast_camel)
	{
		Fast_Camel fast_camel;
		land_air_vehicle_result.push_back(fast_camel.race(distance, fast_camel));
	}
	if (centaur)
	{
		Centaur centaur;
		land_air_vehicle_result.push_back(centaur.race(distance, centaur));
	}
	if (all_terrain_boots)
	{
		All_Terrain_Boots all_terrain_boots;
		land_air_vehicle_result.push_back(all_terrain_boots.race(distance, all_terrain_boots));
	}
	if (aeroplane_carpet)
	{
		Aeroplane_carpet aeroplane_carpet;
		land_air_vehicle_result.push_back(aeroplane_carpet.race(distance, aeroplane_carpet));
	}
	if (eagle)
	{
		Eagle eagle;
		land_air_vehicle_result.push_back(eagle.race(distance, eagle));
	}
	if (broom)
	{
		Broom broom;
		land_air_vehicle_result.push_back(broom.race(distance, broom));
	}
}
