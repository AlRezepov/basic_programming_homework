#include <iostream>

class Calculator
{
public:
	double num1;
	double num2;

	Calculator(double num1, double num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1() {
		if (this->num1 != 0) {
			return true;
		}
		else
		{
			return false;
		}
	}
	bool set_num2() {
		if (this->num2 != 0) {
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	while (true)
	{
		double num1 = 0;
		double num2 = 0;
		Calculator count(num1, num2);
		std::cout << "Введите num1: ";
		std::cin >> count.num1;
		while (count.set_num1 () == false)
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> count.num1;
		}
		std::cout << "Введите num2: ";
		std::cin >> count.num2;
		while (count.set_num2() == false)
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num2: ";
			std::cin >> count.num2;
		}
		std::cout << "num1 + num2 = " << count.add() << std::endl;
		std::cout << "num1 - num2 = " << count.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << count.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << count.multiply() << std::endl;
		std::cout << "num1 / num2 = " << count.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << count.divide_2_1() << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
