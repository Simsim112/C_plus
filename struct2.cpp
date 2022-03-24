//C++ 구조체

#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[10];

	void showData()
	{
		printf("이름: %s, 나이 %d, 직업: %s", name, age, job);
	}

}Human;


int main()
{
	Human h1 = { "홍길동",22, "학생" };
	h1.showData();
	return 0;
}