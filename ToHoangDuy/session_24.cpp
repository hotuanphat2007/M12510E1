#include <iostream>
#include <cstring>

using namespace std;

// Exercise 1: Create a base class Animal with a pure virtual function speak().
class Animal {
public:
	Animal() { cout << "Animal created\n"; }
	virtual ~Animal() { cout << "Animal destroyed\n"; }
	virtual void speak() = 0; // Pure virtual function
};

class Cat : public Animal {
public:
	Cat() { cout << "Cat created\n"; }
	~Cat() { cout << "Cat destroyed\n"; }
	void speak() override { cout << "Meow\n"; }
};

void ex1()
{
	Animal* myCat = new Cat();
	myCat->speak();
	delete myCat;
}

// Exercise 2: Create an abstract class Shape with a pure virtual function draw().
class Shape {
public:
	Shape() { cout << "Shape created\n"; }
	virtual ~Shape() { cout << "Shape destroyed\n"; }
	virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
	Circle() { cout << "Circle created\n"; }
	~Circle() { cout << "Circle destroyed\n"; }
	void draw() override {
		cout << "Drawing Circle\n";
	}
};

class Rectangle : public Shape {
public:
	Rectangle() { cout << "Rectangle created\n"; }
	~Rectangle() { cout << "Rectangle destroyed\n"; }
	void draw() override {
		cout << "Drawing Rectangle\n";
	}
};

void ex2()
{
	Shape* shapes[2];
	shapes[0] = new Circle();
	shapes[1] = new Rectangle();

	for (int i = 0; i < 2; ++i) {
		shapes[i]->draw();
		delete shapes[i];
	}
}

// Exercise 3: Create an abstract class Employee with a pure virtual 
// function calculateSalary().
class Employee {
public:
	Employee() { cout << "Employee created\n"; }
	virtual ~Employee() { cout << "Employee destroyed\n"; }
	virtual void calculateSalary() = 0; // Pure virtual function
};

class FullTimeEmployee : public Employee {
public:
	FullTimeEmployee() { cout << "Full-Time Employee created\n"; }
	~FullTimeEmployee() { cout << "Full-Time Employee destroyed\n"; }
	void calculateSalary() override {
		cout << "Calculating salary for Full-Time Employee\n";
	}
};

class PartTimeEmployee : public Employee {
public:
	PartTimeEmployee() { cout << "Part-Time Employee created\n"; }
	~PartTimeEmployee() { cout << "Part-Time Employee destroyed\n"; }
	void calculateSalary() override {
		cout << "Calculating salary for Part-Time Employee\n";
	}
};

void ex3()
{
	Employee* employees[2];
	employees[0] = new FullTimeEmployee();
	employees[1] = new PartTimeEmployee();

	for (int i = 0; i < 2; ++i) {
		employees[i]->calculateSalary();
		delete employees[i];
	}
}

// Exercise 4: Create a base class Base with a virtual destructor and
// derive a class Derived from it. Demonstrate the importance of virtual destructors.
class Base {
public:
	Base() { cout << "Base created\n"; }
	virtual ~Base() { cout << "Base destroyed\n"; }
};

class Derived : public Base {
public:
	Derived() { cout << "Derived created\n"; }
	~Derived() { cout << "Derived destroyed\n"; }
};

void ex4()
{
	Base* obj = new Derived();
	delete obj; // Correctly calls Derived destructor because Base destructor is virtual
}

int main()
{
	system("cls");
	ex1();
	cout << endl;

	ex2();
	cout << endl;

	ex3();
	cout << endl;
	
	ex4();

	return 0;
}