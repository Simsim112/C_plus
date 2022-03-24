#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* Thir = new Third();
	Second* Sec = Thir; 
	First* Fir = Sec;

	Fir->MyFunc();
	Sec->MyFunc();
	Thir->MyFunc();
	delete Thir;
	return 0;
}