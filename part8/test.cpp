#include <iostream>
using namespace std;

class One {
public:
	void one()
	{
		cout << "One::one()" << endl;
	}
};

class Two :public One
{
public:
	void two()
	{
		cout << "Two::two()" << endl;
	}
};

class Three :public Two
{
public:
	void three() {
		cout << "Three:three" << endl;
	}
};

int main()
{
	One* pone = new One;
	pone->one();
	One* ptwo = new Two;
	ptwo->one();
	One* pthree = new Three;
	pthree->one();

	Three* p3 = new Two;
	ptwo->one();
	return 0;
}