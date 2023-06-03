#pragma once
#include <iostream>
#include <string>

class Triangle
{
public: 
	Triangle(std::string name, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
	void print_info();

protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int angle_A;
	int angle_B;
	int angle_C;
};

class Rectangular_triangle : public Triangle
{
public:
	Rectangular_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B);
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B);
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int side_a);
};

class Quadrilateral
{
public:
	Quadrilateral(std::string name, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
	void print_info();
protected:
	std::string name;
	int side_a;
	int side_b;
	int side_c;
	int side_d;
	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int side_a, int side_b);
};

class Square : public Quadrilateral
{
public:
	Square(int side_a);
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B);
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int side_a, int angle_A, int angle_B);
};