#include <iostream>
#define MODE 1

#ifndef MODE
    #error "MODE не определен"
#endif

int add(int a, int b) {
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";
    return 0;
#endif

#if MODE == 1
    int number_01;
    int number_02;
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    std::cin >> number_01;
    std::cout << "Введите число 2: ";
    std::cin >> number_02;
    std::cout << "Результат сложения: " << add (number_01, number_02);
    return 0;
#endif

#if MODE != 0 && MODE != 1
    std::cout << "Неизвестный режим. Завершение работы";
    return 0;
#endif
    
}
