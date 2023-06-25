#include <iostream>

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

	bool operator==(const Fraction& other) const
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return numerator_01 == numerator_02;
	}


	bool operator!=(const Fraction& other)
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return !(numerator_01 == numerator_02);
	}

	bool operator<(const Fraction& other)
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return numerator_01 < numerator_02;
	}

	bool operator>(const Fraction& other)
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return numerator_01 > numerator_02;
	}

	bool operator<=(const Fraction& other)
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return numerator_01 <= numerator_02;
	}

	bool operator>=(const Fraction& other)
	{
		int common_denominator = denominator_ * other.denominator_;
		int numerator_01 = numerator_ * other.denominator_;
		int numerator_02 = other.numerator_ * denominator_;
		return numerator_01 >= numerator_02;
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(8, 6);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}