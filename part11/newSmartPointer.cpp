#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA()" << endl;
	}
	~AAA()
	{
		cout << "~AAA()" << endl;
	}
	void func()
	{
		cout << "AAA::func()" << endl;
	}
};
int main()
{
	/*unique_ptr<AAA> ptr1 = make_unique<AAA>();
	ptr1->func();*/

	shared_ptr<AAA> ptr1 = make_shared<AAA>();
	ptr1->func();
	cout << "cout: " << ptr1.use_count() << endl;
	{
		shared_ptr<AAA> ptr2(ptr1);
		cout << "cout: " << ptr2.use_count() << endl;
		cout << "cout: " << ptr2.use_count() << endl;
	}
	cout << "cout: " << ptr1.use_count() << endl;
	return 0;
}