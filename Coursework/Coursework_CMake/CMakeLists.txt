cmake_minimum_required(VERSION 3.22.0)
project(Coursework)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 

set (SOURCES_DLL Aeroplane_Carpet.h Aeroplane_Carpet.cpp Air_Vehicle.h Air_Vehicle.cpp All_Terrain_Boots.h All_Terrain_Boots.cpp Broom.h Broom.cpp Camel.h Camel.cpp Centaur.h Centaur.cpp Eagle.h Eagle.cpp Fast_Camel.h Fast_Camel.cpp Land_Vehicle.h Land_Vehicle.cpp Racing.h Racing.cpp Vehicle.h Vehicle.cpp Vehicle_Registration.h Vehicle_Registration.cpp) 
add_library (CourseworkDLL SHARED ${SOURCES_DLL})

add_executable(Coursework Coursework.cpp)
target_link_libraries (Coursework CourseworkDLL)