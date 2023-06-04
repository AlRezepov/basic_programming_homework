#include <iostream>
#include <string>
#include "Triangle.h"
#include "Rectangular_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Triangle a("Треугольник", 10, 20, 30, 50, 60, 70);
	a.print_info();
	std::cout << std::endl;
	Rectangular_triangle b(10, 20, 30, 50, 60);
	b.print_info();
	std::cout << std::endl;
	Isosceles_triangle c(10, 20, 50, 60);
	c.print_info();
	std::cout << std::endl;
	Equilateral_triangle d(30);
	d.print_info();
	std::cout << std::endl;
	Quadrilateral e("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	e.print_info();
	std::cout << std::endl;
	Rectangle f(10, 20);
	f.print_info();
	std::cout << std::endl;
	Square g(20);
	g.print_info();
	std::cout << std::endl;
	Parallelogram h(20, 30, 30, 40);
	h.print_info();
	std::cout << std::endl;
	Rhombus i(30, 30, 40);
	i.print_info();
	std::cout << std::endl;
	return 0;
}
