#include <iostream>
#include <string>


class Triangle
{
public:
	Triangle(std::string name, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}
	void print_info() {
		std::cout << this->name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int angle_A;
	int angle_B;
	int angle_C;
};

class Rectangular_triangle : public Triangle
{
public:
	Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle("Прямоугольный треугольник", side_a, side_b, side_c, angle_A, angle_B, 90) {

	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle("Равнобедренный треугольник", side_a, side_b, side_a, angle_A, angle_B, angle_A) {

	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int side_a) : Triangle("Равносторонний треугольник", side_a, side_a, side_a, 60, 60, 60) {

	}
};

class Quadrilateral
{
public:
	Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
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
	void print_info() {
		std::cout << this->name << ": " << std::endl;
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
	Rectangle(int side_a, int side_b) : Quadrilateral("Прямоугольник", side_a, side_b, side_a, side_b, 90, 90, 90, 90) {

	}
};

class Square : public Quadrilateral
{
public:
	Square(int side_a) : Quadrilateral("Квадрат", side_a, side_a, side_a, side_a, 90, 90, 90, 90) {

	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B) : Quadrilateral("Параллелограмм", side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {

	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int side_a, int angle_A, int angle_B) : Quadrilateral("Ромб", side_a, side_a, side_a, side_a, angle_A, angle_B, angle_A, angle_B) {

	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Triangle a ("Треугольник", 10, 20, 30, 50, 60, 70);
	a.print_info();
	std::cout << std::endl;
	Rectangular_triangle b (10, 20, 30, 50, 60);
	b.print_info();
	std::cout << std::endl;
	Isosceles_triangle c (10, 20, 50, 60);
	c.print_info();
	std::cout << std::endl;
	Equilateral_triangle d (30);
	d.print_info();
	std::cout << std::endl;
	Quadrilateral e ("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	e.print_info();
	std::cout << std::endl;
	Rectangle f(10,20);
	f.print_info();
	std::cout << std::endl;
	Square g (20);
	g.print_info();
	std::cout << std::endl;
	Parallelogram h(20, 30, 30, 40);
	h.print_info();
	std::cout << std::endl;
	Rhombus i (30, 30, 40);
	i.print_info();
	std::cout << std::endl;
	return 0;
}
