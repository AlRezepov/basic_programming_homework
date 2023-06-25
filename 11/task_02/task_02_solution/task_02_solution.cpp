#include <iostream>
#include "leaver.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;

    Leaver leaver;
    std::string a = leaver.leave(name);
    std::cout << a << std::endl;

    return 0;
}