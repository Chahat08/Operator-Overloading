#include <iostream>

class Test {
	int id;
	std::string name;

public:
	Test() :id(0), name("") {
		std::cout << "Empty constructor called" << std::endl;
	}
	Test(int id, std::string name):id(id), name(name){
		std::cout << "Parametrized constructor called" << std::endl;
	}/*
	Test(const Test& other) :id(other.id), name(other.name) {
		std::cout << "Copy constructor called" << std::endl;
		// *this=other;
	}*/

	void print() {
		std::cout << id << ": " << name << std::endl;
	}
	void setId(int id) {
		this->id = id;
	}
	void setName(std::string name) {
		this->name = name;
	}

	const Test& operator=(const Test& other) {
		std::cout << "Assignment Operator" << std::endl;

		id = other.id;
		name = other.name;

		return *this;
	}
};

int main() {
	Test test1(1, "CK"); // parametrized constructor called
	test1.print();

	Test test2; // initialization has been done, using the default (empty) constructor
	test2 = test1; // assignement operator called.
	test2.print();

	// COPY INITIALIZATION
	Test test3 = test1; // this time the assignement operator is not called. Only the constructor is called.
	test3.print(); // implicit copy constructor called above. uncomment copy constructor in class to see.

	/*
		when we overload assigement, we generally want to overload the copy construcator
		as well.
		also, the destructor
	*/

	return 0;
}