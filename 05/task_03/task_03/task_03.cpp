#include <iostream>
#include <string>


class Figure
{
public:
	Figure (int number_side) {
		this->number_side = number_side;
	}
	virtual void print_info() {
		std::cout << "Фигура: " << std::endl;
		if (check())
		{
			std::cout << "Правильная" << std::endl;
		}
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Кол-во сторон: " << this->number_side << std::endl;
	}
	virtual bool check () {
		return true;
	}

protected:
	int number_side = 0;
};

class Triangle : public Figure
{
public:
	Triangle(std::string name, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure (3) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}
	bool check() override {
		if (angle_A + angle_B + angle_C != 180 || number_side != 3) {
			return false;
		} else {
			return true;
		}
	}
	void print_info() override {
			std::cout << this->name << ": " << std::endl;
			if (check())
			{
				std::cout << "Правильная" << std::endl;
			}
			else
			{
				std::cout << "Неправильная" << std::endl;
			}
			std::cout << "Кол-во сторон: " << number_side << std::endl;
			std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
			std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
		}
protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int side_d;
	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
};

class Rectangular_triangle : public Triangle
{
public:
	Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C = 90) : Triangle("Прямоугольный треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {

	}
	bool check() override {
		if (angle_C != 90 || Triangle::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("Равнобедренный треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {

	}
	bool check() override {
		if (side_a != side_c || angle_A != angle_C || Triangle::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int side_a, int side_b, int side_c, int angle_A = 60, int angle_B = 60, int angle_C = 60) : Triangle("Равносторонний треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {

	}
	bool check() override {
		if ((side_a != side_c && side_a != side_b || angle_A != angle_C && angle_A != angle_B) || Triangle::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

class Quadrilateral : public Figure
{
public:
	Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure (4) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
		this->angle_D = angle_D;
	}
	bool check() override {
		if (angle_A + angle_B + angle_C + angle_D != 360 || number_side != 4) {
			return false;
		}
		else {
			return true;
		}
	}
	void print_info() override {
		std::cout << this->name << ": " << std::endl;
		if (check())
		{
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Кол-во сторон: " << number_side << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << ", " << "d = " << this->side_d << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << ", " << "D = " << this->angle_D << std::endl;
	}
protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int side_d;
	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int side_a, int side_b, int side_c, int side_d, int angle_A = 90, int angle_B = 90, int angle_C = 90, int angle_D = 90) : Quadrilateral("Прямоугольник", side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {

	}
	bool check() override {
		if ((side_a != side_c || side_b != side_d || angle_A != angle_B || angle_A != angle_C || angle_A != angle_D) || Quadrilateral::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

class Square : public Quadrilateral
{
public:
	Square(int side_a, int side_b, int side_c, int side_d, int angle_A = 90, int angle_B = 90, int angle_C = 90, int angle_D = 90) : Quadrilateral("Квадрат", side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {

	}
	bool check() override {
		if ((side_a != side_b || side_b != side_c || side_c != side_d || angle_A != angle_B || angle_A != angle_C || angle_A != angle_D) || Quadrilateral::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}

};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A = 90, int angle_B = 90, int angle_C = 90, int angle_D = 90) : Quadrilateral("Параллелограмм", side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {

	}
	bool check() override {
		if ((side_a != side_c || side_b != side_d && angle_A != angle_C || angle_B != angle_D) || Quadrilateral::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int side_a, int side_b, int side_c, int side_d, int angle_A = 90, int angle_B = 90, int angle_C = 90, int angle_D = 90) : Quadrilateral("Ромб", side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {

	}
	bool check() override {
		if ((side_a == side_c && side_b == side_d && side_a == side_b && angle_A == angle_C && angle_A == angle_B && angle_A == angle_D) || Quadrilateral::check() == false) {
			return false;
		}
		else {
			return true;
		}
	}
};

void print_info(Figure* figure)
{
	figure->print_info();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Figure z(0);
	print_info(&z);
	std::cout << std::endl;
	Triangle a("Треугольник", 10, 20, 30, 50, 60, 70);
	print_info(&a);
	std::cout << std::endl;
	Rectangular_triangle b(10, 20, 30, 50, 40);
	print_info(&b);
	std::cout << std::endl;
	Isosceles_triangle c(10, 20, 30, 50, 80, 50);
	print_info(&c);
	std::cout << std::endl;
	Equilateral_triangle d(30, 30, 30);
	print_info(&d);
	std::cout << std::endl;
	Quadrilateral e("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&e);
	std::cout << std::endl;
	Rectangle f(10, 20, 10, 20);
	print_info(&f);
	std::cout << std::endl;
	Square g(20, 20, 20, 20);
	print_info(&g);
	std::cout << std::endl;
	Parallelogram h(20, 30, 20, 30, 30, 40, 30, 40);
	print_info(&h);
	std::cout << std::endl;
	Rhombus i(30, 30, 30, 30, 30, 40, 30, 40);
	print_info(&i);
	std::cout << std::endl;
	return 0;
}