#include <iostream>
using namespace std;

class Base
{
	int num1;
public:
	Base(int an) : num1(an)
	{
		cout << num1 << " : Base ������" << endl;
	}
	virtual ~Base()
	{
		cout << num1 << "Base �Ҹ���" << endl;
	}
	virtual void func()
	{
		cout << "Base::func()" << endl;
	}
};

class Derived : public Base
{
	int num2;
public:
	Derived(int an1, int an2) : Base(an1), num2(an2)
	{
		cout << num2 << " : Derived ������" << endl;
	}
	~Derived()
	{
		cout << num2 << "Derived �Ҹ���" << endl;
	}
	void func()
	{
		cout << "Derived::func()" << endl;
	}
};
int main()
{
	Base b(1);
	b.func();

	Derived d(2, 22);
	d.func();
	
	Base* pb = new Derived(3, 33);
	pb->func();
	return 0;
}