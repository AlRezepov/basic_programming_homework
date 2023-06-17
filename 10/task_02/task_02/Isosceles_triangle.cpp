#include <iostream>
#include <string>
#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle("�������������� �����������", side_a, side_b, side_c, angle_A, angle_B, angle_C) {}
void Isosceles_triangle::print_info() {
	if (side_a == side_c && angle_A == angle_C && angle_A + angle_B + angle_C == 180)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "�������: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << std::endl;
		std::cout << "����: " << "� = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << std::endl;
	}
	else if (side_a != side_c)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � � � �� �����");
	}
	else if (angle_A != angle_C)
	{
		throw Error("������ �������� ��������������� ������������. �������: ���� � � � �� �����");
	}
	else if (side_a != side_c && angle_A != angle_C)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � ���� � � � �� �����");
	}
	else if (side_a != side_c && angle_A != angle_C && angle_A + angle_B + angle_C != 180)
	{
		throw Error("������ �������� ��������������� ������������. �������: ������� � ���� � � � �� ����� � ����� ����� �� ����� 180");
	}
	else if (angle_A + angle_B + angle_C != 180)
	{
		throw Error("������ �������� ��������������� ������������. �������: ����� ����� �� ����� 180");
	}
}