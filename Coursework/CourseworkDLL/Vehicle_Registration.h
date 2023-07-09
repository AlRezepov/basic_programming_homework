#pragma once

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORK_API __declspec(dllexport)
#else
#define COURSEWORK_API __declspec(dllimport)
#endif

void COURSEWORK_API land_vehicle_registration(bool& land, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, int& land_vehicle_cout, std::vector <std::string>& land_vehicle);
void COURSEWORK_API air_vehicle_registration(bool& air, bool& aeroplane_carpet, bool& eagle, bool& broom, int& air_vehicle_cout, std::vector <std::string>& air_vehicle);
void COURSEWORK_API land_air_vehicle_registration(bool& land_air, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, int& land_air_vehicle_cout, std::vector <std::string>& land_air_vehicle);
void COURSEWORK_API fchoice_land_vehicle(int& choice_land_vehicle, int& vehicle_cout, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, std::vector <std::string>& land_vehicle);
void COURSEWORK_API fchoice_air_vehicle(int& choice_air_vehicle, int& air_vehicle_cout, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <std::string>& air_vehicle);
void COURSEWORK_API fchoice_land_air_vehicle(int& choice_land_air_vehicle, int& land_air_vehicle_cout, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <std::string>& land_air_vehicle);