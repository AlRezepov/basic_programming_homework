#include <iostream>
#include <string>

struct Bank_Account
{
    int number;
    std::string name;
    double amount;
};

void change_amount(Bank_Account& user, double new_amount) {
    user.amount = new_amount;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Bank_Account user;
    std::cout << "Введите номер счёта: " << std::endl;
    std::cin >> user.number;
    std::cout << "Введите имя владельца: " << std::endl;
    std::cin >> user.name;
    std::cout << "Введите баланс: " << std::endl;
    std::cin >> user.amount;
    std::cout << "Введите новый баланс: " << std::endl;
    double new_balance;
    std::cin >> new_balance;
    change_amount(user, new_balance);
    std::cout << "Ваш счёт: " << user.name << ", " << user.number << ", " << user.amount << std::endl;
    return 0;
}
