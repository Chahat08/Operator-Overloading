#include <iostream>

class Test {
	int id;
	std::string name;

public:
	Test():id(0), name(""){}
	Test(int id, std::string name):id(id), name(name){}

	void setId(int id) {
		this->id = id;
	}
	
	void setName(std::string name) {
		this->name = name;
	}

	void print() {
		std::cout << id << ": " << name << std::endl;
	}
};

int main() {
	Test test1(1, "CK");
	test1.print();

	Test test2(2, "AR");
	test2.print();

	test2 = test1; // assignment overloading done by default
	test2.print();

	std::cout << std::endl;

	test2.setId(2); // setting id of test2
	test1.print(); // but printing test1
	test2.print(); // OBJECT ASSIGNMENT IS A DEEP COPY

	std::cout << std::endl;

	Test test3;
	test3 = test2 = test1; // operator (method) chaining
	test1.print(); // so if assignement is a method call, then it has a return type of Test as well
	test2.print();
	test3.print();

	std::cout << std::endl;

	Test test4;
	test4.operator=(test1); // assignment operator as a method call
	test4.print();

	return 0;
}