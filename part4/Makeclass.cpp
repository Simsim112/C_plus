#include <iostream>
using namespace std;

class Ctime
{
private:
	int hour;
	int min;
	int sec;
public:
	Ctime()
	{
		cout << "���� ����Ʈ ������" << endl;
	}
	Ctime(int h, int m, int s):hour(h), min(m),sec(s)
	{
	}
	/*void setTime(int h,int m,int s)
	{
		hour = h;
		min = m;
		sec = s;
	}*/
	void getTime() const
	{
		cout << "����ð��� " << hour << "�� " << min << "�� " << sec << "�� " << endl;
	}
};

int main()
{
	Ctime t(14,59,12);
	//t.setTime(10, 20, 33);
	t.getTime();
	return 0;
}