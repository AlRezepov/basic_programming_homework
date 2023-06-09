#pragma once

#include <string>

#ifdef TASK02_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

class LEAVER_API Leaver {
public:
    std::string leave(const std::string& name);
};
