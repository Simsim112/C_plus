//C++ Ŭ����

#include <stdio.h>

class human {
public:
	char name[20];
	int age;
	char job[10];

	void showData()
	{
		printf("�̸�: %s, ���� %d, ����: %s", name, age, job);
	}

};


int main()
{
	human h1{ "ȫ�浿", 20, "�л�" };
	h1.showData();
	return 0;
}