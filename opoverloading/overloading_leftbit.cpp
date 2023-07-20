#include <iostream>

using namespace std;

class Test {
	int id;
	string name;
public:
	Test():id(0), name(""){}
	Test(int id, string name):id(id), name(name){}
	Test(const Test& other):id(other.id), name(other.name){}

	const Test& operator=(const Test& other) {
		*this = other;
		return *this;
	}

	void setId(int id) {
		this->id = id;
	}

	void setName(string name) {
		this->name = name;
	}

	int getId() {
		return this->id;
	}
	
	string getName() {
		return this->name;
	}

	void print() {
		cout << id << ": " << name << endl;
	}

	friend ostream& operator<<(ostream& out, const Test& test) {
		out << test.id << ": " << test.name;
		return out;
	}
};

int main() {
	Test test1(8, "CK");
	test1.print();

	cout << test1 << endl;

	Test test2(9, "MK");
	cout << test1 << test2 << endl;
	return 0;
}