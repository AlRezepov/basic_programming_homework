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
#include "Error.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	try {
		Triangle a("Треугольник", 10, 20, 30, 50, 60, 70);
		a.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		Rectangular_triangle b(10, 20, 30, 45, 45, 90);
		b.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Isosceles_triangle c(10, 20, 10, 60, 60, 60);
		c.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Equilateral_triangle d(10, 10, 10, 60, 60, 60);
		d.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Quadrilateral e("Четырёхугольник", 10, 20, 30, 40, 90, 90, 90, 90);
		e.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Rectangle f(10, 20, 20, 20, 90, 90, 90, 90);
		f.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Square g(20, 20, 20, 20, 90, 90, 90, 90);
		g.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Parallelogram h(20, 20, 20, 20, 90, 60, 90, 60);
		h.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Rhombus i(20, 10, 20, 20, 90, 90, 90, 90);
		i.print_info();
		std::cout << std::endl;
	}
	catch (const Error& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}