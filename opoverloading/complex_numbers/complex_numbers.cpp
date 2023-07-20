#include "complex_numbers.h"

namespace numbers {

	void Complex::setReal(int real) {
		this->real = real;
	}

	void Complex::setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}

	int Complex::getReal() const{
		return this->real;
	}

	int Complex::getImaginary() const {
		return this->imaginary;
	}

	const Complex& Complex::operator=(const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;
		return *this;
	}

	Complex Complex::operator+(const Complex& other) const {
		return Complex(real + other.real, imaginary + other.imaginary);
	}

	Complex Complex::operator+(int n) const {
		return Complex(real + n, imaginary);
	}

	Complex Complex::operator-(const Complex& other) const {
		return Complex(real - other.real, imaginary - other.imaginary);
	}

	Complex Complex::operator-(int n) const {
		return Complex(real - n, imaginary);
	}

	const bool Complex::operator==(const Complex& other) const {
		return real == other.real && imaginary == other.imaginary;
	}

	const bool Complex::operator!=(const Complex& other) const {
		return real != other.real || imaginary != other.imaginary;
	}

	Complex Complex::operator*() {
		return Complex(real, -imaginary);
	}

	std::ostream& operator<<(std::ostream& out, const Complex& complex) {
		out << complex.real << " + " << complex.imaginary << "i";
		return out;
	}
}