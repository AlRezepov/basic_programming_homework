#include <iostream>
#include <string>
#include "Square.h"

Square::Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrilateral("�������", side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {}
void Square::print_info() {
	if (side_a == side_c && side_a == side_b && side_a == side_d && angle_A == angle_C && angle_A == angle_B && angle_A == angle_D && angle_A + angle_B + angle_C + angle_D == 360)
	{
		std::cout << this->name << ": " << std::endl;
		std::cout << "�������: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << ", " << "d = " << this->side_d << std::endl;
		std::cout << "����: " << "� = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << ", " << "D = " << this->angle_D << std::endl;
	}
	else if (side_a != side_c || side_a != side_b || side_a != side_d)
	{
		throw Error("������ �������� ��������. �������: ������� � B � D �� �����");
	}
	else if (angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90)
	{
		throw Error("������ �������� ��������. �������: ���� � B � D �� ����� 90 ��������");
	}
	else if (angle_A + angle_B + angle_C + angle_D != 360)
	{
		throw Error("������ �������� ��������. �������: ����� ����� �� ����� 360");
	}
}