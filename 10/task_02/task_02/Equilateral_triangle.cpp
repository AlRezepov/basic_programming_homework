#include <iostream>
#include <string>
#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("�������������� �����������", side_a, side_b, side_c, angle_A, angle_B, angle_C) {}
void Equilateral_triangle::print_info() {
	if (side_a == side_c && side_a == side_b && angle_A == angle_C && angle_A == angle_B && angle_A + angle_B + angle_C == 180)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "�������: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "����: " << "� = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
	else if (side_a != side_c || side_a != side_b)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � B � �� �����");
	}
	else if (angle_A != angle_C || angle_A != angle_B)
	{
		throw Error("������ �������� ��������������� ������������. �������: ���� � B � �� �����");
	}
	else if (side_a != side_c || side_a != side_b || angle_A != angle_C || angle_A != angle_B)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � ���� � B � �� �����");
	}
	else if (side_a != side_c || side_a != side_b || angle_A != angle_C || angle_A != angle_B && angle_A + angle_B + angle_C != 180)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � ���� � B � �� ����� � ����� ����� �� ����� 180");
	}
	else if (angle_A + angle_B + angle_C != 180)
	{
		throw Error("������ �������� ��������������� ������������. �������: ����� ����� �� ����� 180");
	}
}