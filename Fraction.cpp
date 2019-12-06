#include "stdafx.h"
#include <iostream>



class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction()
	{
		m_numerator = 5;
		m_denominator = 2;
	}

	int getNumerator() { return m_numerator; }
	void setNumerator(int numerator) { m_numerator = numerator; }
	int getDenominator() { return m_denominator; }
	void setDenominator(int denominator) { m_denominator = denominator; }
	double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{
	Fraction drob;
	drob.setNumerator(9);
	drob.setDenominator(8);
	std::cout << drob.getNumerator() << "/" << drob.getDenominator() << "=" << drob.getNumerator() / drob.getDenominator() << '\n';
	std::cout << drob.getValue();

	return 0;
}

