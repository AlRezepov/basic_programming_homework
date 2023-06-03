#include <iostream>
#include "func.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int first_number;
    int second_number;
    int choose;
    std::cout << "Введите первое число: ";
    std::cin >> first_number;
    std::cout << "Введите второе число: ";
    std::cin >> second_number;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> choose;
    switch (choose)
    {
    case 1: {
        std::cout << first_number << " плюс " << second_number << " = " << adding(first_number, second_number);
        break;
    }
    case 2: {
        std::cout << first_number << " минус " << second_number << " = " << subtraction(first_number, second_number);
        break;
    }
    case 3: {
        std::cout << first_number << " умножить на " << second_number << " = " << multiplication(first_number, second_number);
        break;
    }
    case 4: {
        std::cout << first_number << " разделить на " << second_number << " = " << divide(first_number, second_number);
        break;
    }
    case 5: {
        std::cout << first_number << " в степени " << second_number << " = " << exponentiation(first_number, second_number);
        break;
    }
   }
   return 0;
}