#include <iostream>
#include <cstring>

using namespace std;

// Exercise 1: Overload the +, -, and * operators for a Complex class to perform addition, 
// subtraction, and multiplication of complex numbers.
class Complex {
private:
	double real, image;
public:
	Complex() : real(0), image(0) {}
	Complex(double r, double i) : real(r), image(i) {}
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator-(const Complex& other) {
		return Complex(real - other.real, image - other.image);
	}
	Complex operator*(const Complex& other) {
		return Complex(real * other.real - image * other.image, real * other.image + image * other.real);
	}
	~Complex(){}
	friend ostream& operator<<(ostream& out, const Complex& c) {
		out << "Real: " << c.real << ", image: " << c.image << endl;
		return out;
	}
};

void ex1() {
	Complex c1(2.9, 3.7), c2(5.6, 4.2), c3;
	c3 = c1 + c2;
	cout << c3;
	c3 = c1 - c2;
	cout << c3;
	c3 = c1 * c2;
	cout << c3;
}

// Exercise 2: Overload the == and < operators for a Box class to compare boxes based on their volumes.
class Box {
private:
	int length, width, height;
public:
	Box(int l, int w, int h) : length(l), width(w), height(h) {}
	~Box() {}
	bool operator==(const Box& other) {
		return (length*width*height) == (other.length*other.width*other.height);
	}
	bool operator<(const Box& other) {
		return (length * width * height) < (other.length * other.width * other.height);
	}
};

void ex2() {
	Box b1(2, 3, 4), b2(4, 2, 3), b3(5, 1, 6);
	if(b1 == b2) {
		cout << "b1 is equal to b2" << endl;
	} else {
		cout << "b1 is not equal to b2" << endl;
	}
	if(b1 < b3) {
		cout << "b1 is smaller than b3" << endl;
	} else {
		cout << "b1 is not smaller than b3" << endl;
	}

}

// Exercise 3: Overload the >> and << operators for a Student class to input and output student details.
class Student {
private:
	string name;
	int marks;
public:
	Student() : name(""), marks(0) {}
	friend istream& operator>>(istream& in, Student& s) {
		cout << "Enter name: "; in >> s.name;
		cout << "Enter marks: "; in >> s.marks;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Student& s) {
		out << "Name: " << s.name << ", Marks: " << s.marks << endl;
		return out;
	}
};

void ex3() {
	Student s1;
	cin >> s1;
	cout << s1;
}

// Exercise 4: Overload the ++ operator (both prefix and postfix) for a Counter 
// class to increment a count value.
class counter
{
private:
	int count;
public:
	counter() : count(0) {}
	counter(int c) : count(c) {}
	~counter() {}
	counter operator++() // Prefix increment
	{
		++count;
		return *this;
	}
	counter operator++(int) // Postfix increment
	{
		counter temp = *this;
		count++;
		return temp;
	}
	void display() const
	{
		cout << "Count: " << count << endl;
	}
};

void ex4()
{
	counter c1;
	c1.display();

	++c1; // Prefix increment
	c1.display();

	c1++; // Postfix increment
	c1.display();
}

class Person {
private:
	char* name;
public:
	Person(const char* n) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	Person() {
		name = new char[1];
		name[0] = '\0';
	}
	~Person() {
		delete[] name;
	}
	Person(const Person& other) // Copy constructor
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	Person& operator=(const Person& other) // Copy assignment operator
	{
		if (this != &other) {
			delete[] name;
			name = new char[strlen(other.name) + 1];
			strcpy(name, other.name);
		}
		return *this;
	}
	void display() const {
		cout << "Name: " << name << endl;
	}
};

void ex5()
{
	Person p1("Alice");
	p1.display();
	Person p2 = p1; // Calls copy constructor
	p2.display();
	Person p3; p3.display();
	p3 = p1; // Calls copy assignment operator
	p3.display();
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
	cout << endl;

	ex5();

	return 0;
}