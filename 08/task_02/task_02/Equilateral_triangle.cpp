#include <iostream>
#include <string>
#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("Равносторонний треугольник", side_a, side_b, side_c, angle_A, angle_B, angle_C) {}
void Equilateral_triangle::print_info() {
	if (side_a == side_c && side_a == side_b && angle_A == angle_C && angle_A == angle_B && angle_A + angle_B + angle_C == 180)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
	else if (side_a != side_c || side_a != side_b)
	{
		throw Error("Ошибка создания равностороннего треугольника. Причина: Стороны А B С не равны");
	}
	else if (angle_A != angle_C || angle_A != angle_B)
	{
		throw Error("Ошибка создания равностороннего треугольника. Причина: Углы А B С не равны");
	}
	else if (side_a != side_c || side_a != side_b || angle_A != angle_C || angle_A != angle_B)
	{
		throw Error("Ошибка создания равностороннего треугольника. Причина: Стороны и углы А B С не равны");
	}
	else if (side_a != side_c || side_a != side_b || angle_A != angle_C || angle_A != angle_B && angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания равностороннего треугольника. Причина: Стороны и углы А B С не равны и сумма углов не равна 180");
	}
	else if (angle_A + angle_B + angle_C != 180)
	{
		throw Error("Ошибка создания равностороннего треугольника. Причина: сумма углов не равна 180");
	}
}