#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA(): num(0){}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
	~AAA()
	{
		cout << "나는 소멸자입니다!!" << endl;
	}
private:
	AAA(int n) : num(n){}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(10);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;
}