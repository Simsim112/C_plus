#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "Base Constructor" << endl; }
	void SimpleFunc() { cout << "BaseOne" << endl; }
};

class MiddleDerivedOne : public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedeOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleDerivedOne" << endl;
	}
};

class MiddleDerivedTwo :public Base
{
public:
	MiddleDerivedTwo() : Base()
	{
		cout << "MiddleDerivedTwo Constructor" << endl;
	}
	void MiddleFuncTow()
	{
		SimpleFunc();
		cout << "MiddleDeriverdTwo" << endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public:
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleDerivedOne();
		MiddleDerivedTwo();
		//SimpleFunc();
		
	}
};

int main()
{
	cout << "按眉积己 傈..." << endl;
	LastDerived ldr;
	cout << "按眉积己 饶..." << endl;
	ldr.ComplexFunc();
	return 0;
}