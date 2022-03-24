#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1()
	{
		cout << "Base::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}
	void func3()
	{
		cout << "Base::func3()" << endl;
	}
};

class Derived : public Base
{
public:
	void func1()
	{
		cout << "Derived::func1()" << endl;
	}
	void func3()
	{
		cout << "Derived::func3()" << endl;
	}
	void func4()
	{
		cout << "Derived::func4()" << endl;
	}
};
int main()
{
	Base b;
	Derived d;

	Base* pb = new Derived();
	pb->func1();
	pb->func2();
	pb->func3();

	return 0;
}