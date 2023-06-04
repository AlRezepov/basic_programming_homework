#include <iostream>
#include <string>
#include "Triangle.h"


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