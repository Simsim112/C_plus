//C++ 클래스

#include <stdio.h>

class human {
public:
	char name[20];
	int age;
	char job[10];

	void showData()
	{
		printf("이름: %s, 나이 %d, 직업: %s", name, age, job);
	}

};


int main()
{
	human h1{ "홍길동", 20, "학생" };
	h1.showData();
	return 0;
}