#include <iostream>
#include <string>
#include "class.h"


Triangle::Triangle(std::string name, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}
void Triangle:: print_info() {
	std::cout << this->name << ": " << std::endl;
	std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
	std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
}

Rectangular_triangle:: Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle("Прямоугольный треугольник", side_a, side_b, side_c, angle_A, angle_B, 90) {}

Isosceles_triangle:: Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle("Равнобедренный треугольник", side_a, side_b, side_a, angle_A, angle_B, angle_A) {}

Equilateral_triangle:: Equilateral_triangle(int side_a) : Triangle("Равносторонний треугольник", side_a, side_a, side_a, 60, 60, 60) {}

Quadrilateral::	Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
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
void Quadrilateral:: print_info() {
		std::cout << this->name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << ", " << "d = " << this->side_d << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << ", " << "D = " << this->angle_D << std::endl;
	}

Rectangle::Rectangle(int side_a, int side_b) : Quadrilateral("Прямоугольник", side_a, side_b, side_a, side_b, 90, 90, 90, 90) {}

Square:: Square(int side_a) : Quadrilateral("Квадрат", side_a, side_a, side_a, side_a, 90, 90, 90, 90) {}

Parallelogram:: Parallelogram(int side_a, int side_b, int angle_A, int angle_B) : Quadrilateral("Параллелограмм", side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {}

Rhombus:: Rhombus(int side_a, int angle_A, int angle_B) : Quadrilateral("Ромб", side_a, side_a, side_a, side_a, angle_A, angle_B, angle_A, angle_B) {}