#include <iostream>
using namespace std;
class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
};
class Circle : public Shape {
public:
	virtual void draw() {
		Shape::draw();
		cout << "Circle::draw() called" << endl;
	}
};
class Base {
public:
	virtual void fail() {};
	virtual void success() {};
	virtual void g(int) {}
	
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void success() {}
	virtual void fail(int, double){}
	virtual void f() { cout << "Derived::f() called" << endl; }
};

class GrandDerived : public Derived {
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();

	Shape* pShape = new Circle();
	pShape->paint();
	delete pShape;

	



}