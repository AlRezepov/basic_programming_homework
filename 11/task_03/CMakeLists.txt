cmake_minimum_required(VERSION 3.22.0)
project(DLL) 
set (SOURCES_DLL leaver.h leaver.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (task_03_DLL SHARED ${SOURCES_DLL})

add_executable(DLL task_03.cpp)
target_link_libraries (DLL task_03_DLL)