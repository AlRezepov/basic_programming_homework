cmake_minimum_required(VERSION 3.22.0)
project(Dynamic)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 

set (SOURCES_DLL leaver.h leaver.cpp)
add_library (task_03_DLL SHARED ${SOURCES_DLL})

add_executable(Dynamic task_03.cpp)
target_link_libraries (Dynamic task_03_DLL)