#include <iostream>
#include <string>


class Figure
{
public:
	Figure(int number_side, std::string name) {
		this->number_side = number_side;
		this->name = name;
	}
	void get_number_side () {
		std::cout << number_side;
	}
	void get_name() {
		std::cout << name;
	}
protected:
	int number_side = 0;
	std::string name = "Figure";

};

class Triangle : public Figure
{
public:
	Triangle() : Figure(3, "Triangle") {

	}
};

class Square : public Figure
{
public:
	Square() : Figure(4, "Square") {

	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Figure a (0, "Figure");
	Triangle b;
	Square c;
	a.get_name();
	std::cout << " количество сторон = ";
	a.get_number_side();
	std::cout << std::endl;
	b.get_name();
	std::cout << " количество сторон = ";
	b.get_number_side();
	std::cout << std::endl;
	c.get_name();
	std::cout << " количество сторон = ";
	c.get_number_side();
	std::cout << std::endl;
}
