#include <iostream>
#include <string>

class Counter
{
private:
	int number;

public:
	Counter(int number_default = 1) {
		this->number = number_default;
	}
	void increment () {
		++number;
	}
	void decrement () {
		--number;
	}
	int get() {
		return number;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int number;
	std::string answer;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	std::cin >> answer;
	if (answer == "yes") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> number;
	} else {
		number = 1;
	}
	Counter counter(number);
		while (true)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> answer;
			if (answer == "+") {
				counter.increment();
			} else if (answer == "-") {
				counter.decrement();
			} else if (answer == "=") {
				std::cout << counter.get() << std::endl;
			} else if (answer == "x") {
				std::cout << "До свидания!" << std::endl;
				break;
			}
		}
return 0;
}
