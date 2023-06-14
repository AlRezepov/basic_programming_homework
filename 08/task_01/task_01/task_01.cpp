#include <iostream>


int function(std::string str, int forbidden_length) {
    int lenght = str.length();
    if (lenght == forbidden_length) {
        throw "bad_length";
    }
    return lenght;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::string word;
    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> word;
        try
        {
            int lenght = function(word, forbidden_length);
            std::cout << "Длина слова " << word << " равна " << word.length() << std::endl;
        }
        catch (const char* error_message)
        {
            std::cout << "Вы ввели слово запретной длины! До свидания";
            break;
        }
    }
    return 0;
}
