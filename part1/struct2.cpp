//C++ ����ü

#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[10];

	void showData()
	{
		printf("�̸�: %s, ���� %d, ����: %s", name, age, job);
	}

}Human;


int main()
{
	Human h1 = { "ȫ�浿",22, "�л�" };
	h1.showData();
	return 0;
}