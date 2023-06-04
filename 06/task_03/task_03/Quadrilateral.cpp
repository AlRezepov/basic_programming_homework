#include <iostream>
#include <string>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
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
void Quadrilateral::print_info() {
	std::cout << this->name << ": " << std::endl;
	std::cout << "Стороны: " << "a = " << this->side_a << ", " << "b = " << this->side_b << ", " << "c = " << this->side_c << ", " << "d = " << this->side_d << std::endl;
	std::cout << "Углы: " << "А = " << this->angle_A << ", " << "B = " << this->angle_B << ", " << "C = " << this->angle_C << ", " << "D = " << this->angle_D << std::endl;
}