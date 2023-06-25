#include <iostream>
#include "greeter.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;

    Greeter greeter;
    std::string a = greeter.greet(name);
    std::cout << a << std::endl;

    return 0;
}