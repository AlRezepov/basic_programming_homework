#include <iostream>
#include <string>
#include "greeter.h"

std::string Greeter::greet(const std::string& name) {
    return "Здравствуйте, " + name + "!";
}