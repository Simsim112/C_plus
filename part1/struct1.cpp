//C언어 구조체

#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[10];
}Human;

void showData(Human h)
{
	printf("이름: %s, 나이 %d, 직업: %s", h.name, h.age, h.job);
}
int main()
{
	Human h1 = { "홍길동",22, "학생" };
	showData(h1);
	return 0;
}