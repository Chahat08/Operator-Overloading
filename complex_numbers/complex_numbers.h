#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

namespace numbers {
	class Complex {
		int real;
		int imaginary;

	public:
		Complex() :real(0), imaginary(0) {}
		Complex(int real, int imaginary) :real(real), imaginary(imaginary) {}
		Complex(const Complex& other) :real(other.real), imaginary(other.imaginary) {}

		void setReal(int);
		void setImaginary(int);
		int getReal() const;
		int getImaginary() const;

		const Complex& operator=(const Complex&);
		Complex operator+(const Complex&) const;
		Complex operator+(const int) const;
		Complex operator-(const Complex&) const;
		Complex operator-(const int) const;
		const bool operator==(const Complex&) const;
		const bool operator!=(const Complex& other) const;
		Complex operator*(); // conjugate of complex no: sign of img part flipped
		friend std::ostream& operator<<(std::ostream&, const Complex&);

	};
	std::ostream& operator<<(std::ostream&, const Complex&);
}

#endif