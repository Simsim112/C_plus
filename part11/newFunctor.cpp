#include <iostream>
using namespace std;

class CTest
{
private:
	int money;
public:
	CTest(int m = 0) :money(m)
	{
		cout << "CTest »ý¼ºÀÚ" << endl;
	}
	int operator()()
	{
		return money;
	}
	int operator()(int m)
	{
		return money += m;
	}
};
int main()
{
	CTest m;
	cout << m() << endl;
	cout << m(100) << endl;
	return 0;
}