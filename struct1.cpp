//C��� ����ü

#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[10];
}Human;

void showData(Human h)
{
	printf("�̸�: %s, ���� %d, ����: %s", h.name, h.age, h.job);
}
int main()
{
	Human h1 = { "ȫ�浿",22, "�л�" };
	showData(h1);
	return 0;
}