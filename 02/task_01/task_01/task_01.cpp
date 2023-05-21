#include <iostream>

enum months {
    January = 1, 
    February, 
    March, 
    April, 
    May, 
    June, 
    July, 
    August, 
    September, 
    October, 
    November, 
    December
};


int main()
{
    setlocale(LC_ALL, "Russian");

    int number_mouth;
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> number_mouth;
        if (number_mouth > 12 || number_mouth < 0) {
            std::cout << "Неправильный номер!" << std::endl;
        }
        if (number_mouth == 0) {
            std::cout << "До свидания";
        }
        if (number_mouth >= 1 && number_mouth <= 12) {
            months month = static_cast<months> (number_mouth);
            switch (month)
            {
            case January:
                std::cout << "Январь" << std::endl;
                break;
            case February:
                std::cout << "Февраль" << std::endl;
                break;
            case March:
                std::cout << "Март" << std::endl;
                break;
            case April:
                std::cout << "Апрель" << std::endl;
                break;
            case May:
                std::cout << "Май" << std::endl;
                break;
            case June:
                std::cout << "Июнь" << std::endl;
                break;
            case July:
                std::cout << "Июль" << std::endl;
                break;
            case August:
                std::cout << "Август" << std::endl;
                break;
            case September:
                std::cout << "Сентябрь" << std::endl;
                break;
            case October:
                std::cout << "Октябрь" << std::endl;
                break;
            case November:
                std::cout << "Ноябрь" << std::endl;
                break;
            case December:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
    } while (number_mouth != 0);
    return 0;  
}