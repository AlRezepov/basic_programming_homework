#include <iostream>
#include <string>
#include "Rectangular_triangle.h"

Rectangular_triangle::Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("Прямоугольный треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {}
void Rectangular_triangle::print_info() {
	if (angle_C == 90 && angle_A + angle_B + angle_C == 180)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
	else if (angle_C != 90 && angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания прямоугольного треугольника. Причина: сумма углов не равна 180 и угол С не равен 90 градусов");
	}
	else if (angle_C != 90)
	{
		throw Error("Ошибка создания прямоугольного треугольника. Причина: угол С не равен 90 градусов");
	}
	else if (angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания прямоугольного треугольника. Причина: сумма углов не равна 180");
	}
}