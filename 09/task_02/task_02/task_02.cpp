﻿#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	Fraction operator+(Fraction other)
	{
		int new_numerator_ = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int new_denominator_ = other.denominator_ * denominator_;
		return Fraction(new_numerator_, new_denominator_);
	}
	Fraction operator-(Fraction other)
	{
		int new_numerator_ = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int new_denominator_ = other.denominator_ * denominator_;
		return Fraction(new_numerator_, new_denominator_);
	}
	Fraction operator*(Fraction other)
	{
		int new_numerator_ = numerator_ * other.numerator_;
		int new_denominator_ = other.denominator_ * denominator_;
		return Fraction(new_numerator_, new_denominator_);
	}
	Fraction operator/(Fraction other)
	{
		int new_numerator_ = numerator_ * other.denominator_;
		int new_denominator_ = denominator_ * other.numerator_;
		return Fraction(new_numerator_, new_denominator_);
	}
	Fraction operator-()
	{
		return Fraction(-numerator_, denominator_);
	}

	Fraction operator++()
	{
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction temp(numerator_, denominator_);
		numerator_ += denominator_;
		return temp;
	}

	Fraction operator--()
	{
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temp(numerator_, denominator_);
		numerator_ -= denominator_;
		return temp;
	}

	int divisor(int a, int b)
	{
		if (b == 0)
			return a;
		return divisor(b, a % b);
	}

	Fraction fraction_reduction()
	{
		int a = divisor(numerator_, denominator_);
		int new_numerator_ = numerator_ / a;
		int new_denominator_ = denominator_ / a;
		return Fraction(new_numerator_, new_denominator_);
	}

	void print() {

		std::cout << numerator_ << "/" << denominator_;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int num_01, den_01;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num_01;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> den_01;
	Fraction f1(num_01, den_01);


	int num_02, den_02;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num_02;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> den_02;
	Fraction f2(num_02, den_02);


	Fraction sum_f1_f2 = f1 + f2;
	std::cout << num_01 << "/" << den_01 << " + " << num_02 << "/" << den_02 << " = ";
	sum_f1_f2.print();
	std::cout << std::endl;
	std::cout << "Сокращенная дробь: ";
	Fraction reduction_sum = sum_f1_f2.fraction_reduction();
	reduction_sum.print();
	std::cout << std::endl;


	Fraction sub_f1_f2 = f1 - f2;
	std::cout << num_01 << "/" << den_01 << " - " << num_02 << "/" << den_02 << " = ";
	sub_f1_f2.print();
	std::cout << std::endl;
	std::cout << "Сокращенная дробь: ";
	Fraction reduction_sub = sub_f1_f2.fraction_reduction();
	reduction_sub.print();
	std::cout << std::endl;


	Fraction mul_f1_f2 = f1 * f2;
	std::cout << num_01 << "/" << den_01 << " * " << num_02 << "/" << den_02 << " = ";
	mul_f1_f2.print();
	std::cout << std::endl;
	std::cout << "Сокращенная дробь: ";
	Fraction reduction_mul = mul_f1_f2.fraction_reduction();
	reduction_mul.print();
	std::cout << std::endl;


	Fraction div_f1_f2 = f1 / f2;
	std::cout << num_01 << "/" << den_01 << " / " << num_02 << "/" << den_02 << " = ";
	div_f1_f2.print();
	std::cout << std::endl;
	std::cout << "Сокращенная дробь: ";
	Fraction reduction_div = div_f1_f2.fraction_reduction();
	reduction_div.print();
	std::cout << std::endl;


	Fraction incr_f1_f2 = ++f1;
	std::cout << "++" << num_01 << "/" << den_01 << " = ";
	incr_f1_f2.print();
	std::cout << std::endl;


	Fraction f1_f2_decr = f1--;
	std::cout << num_01 << "/" << den_01 << "--" << " = ";
	f1_f2_decr.print();
	std::cout << std::endl;

	std::cout << "Проверка префиксного инкремента" << std::endl;
		Fraction fx1(3, 7);
		fx1.print();
		std::cout << std::endl;
		Fraction fx2 = ++fx1;
		std::cout << "++ 3/7 = ";
		fx2.print();
		std::cout << std::endl;
	std::cout << "Проверка постфиксного инкремента" << std::endl;
		Fraction fx3(3, 7);
		fx3.print();
		std::cout << std::endl;
		Fraction fx4 = fx3++;
		std::cout << "3/7 ++ = ";
		fx4.print();
		std::cout << std::endl;
	std::cout << "Проверка префиксного декремента" << std::endl;
		Fraction fx5(3, 7);
		fx5.print();
		std::cout << std::endl;
		Fraction fx6 = --fx5;
		std::cout << "-- 3/7 = ";
		fx6.print();
		std::cout << std::endl;
	std::cout << "Проверка постфиксного декремента" << std::endl;
		Fraction fx7(3, 7);
		fx7.print();
		std::cout << std::endl;
		Fraction fx8 = fx7--;
		std::cout << "3/7 -- = ";
		fx8.print();
		std::cout << std::endl;
	return 0;
}