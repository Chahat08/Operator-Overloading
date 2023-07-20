#include "complex_numbers.h"

using namespace numbers;

int main() {
	Complex n(1, 2);
	std::cout << n << std::endl; // 1, 2

	Complex m;
	m = n;
	std::cout << m << std::endl; // 1, 2

	Complex c(3, 4);

	std::cout << (m + c) << std::endl; // 4, 6
	std::cout << (m - c) << std::endl; // -2, -2
	std::cout << ((m + n) + c) << std::endl; // 5, 8
	std::cout << (m == c) << std::endl; // false: 0
	std::cout << (m == n) << std::endl; // true: 1
	std::cout << (m != n) << std::endl; // false: 0
	std::cout << (m != c) << std::endl; // true: 1
	std::cout << *m << std::endl; // 1, -2

	std::cout << *m + *Complex(2, 3) << std::endl; // 3, -5

	return 0;
}