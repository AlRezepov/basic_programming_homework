#include <iostream>
#include <string>
#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("Равнобедренный треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {}
void Isosceles_triangle::print_info() {
	if (side_a == side_c && angle_A == angle_C && angle_A + angle_B + angle_C == 180)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
	else if (side_a != side_c)
	{
		throw Error("Ошибка создания равнобедренного треугольника. Причина: Стороны А и С не равны");
	}
	else if (angle_A != angle_C)
	{
		throw Error("Ошибка создания равнобедренного треугольника. Причина: Углы А и С не равны");
	}
	else if (side_a != side_c && angle_A != angle_C)
	{
		throw Error("Ошибка создания равнобедренного треугольника. Причина: Стороны и углы А и С не равны");
	}
	else if (side_a != side_c && angle_A != angle_C && angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания равнобедренного треугольника. Причина: Стороны и углы А и С не равны и сумма углов не равна 180");
	}
	else if (angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания равнобедренного треугольника. Причина: сумма углов не равна 180");
	}
}