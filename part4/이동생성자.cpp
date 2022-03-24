#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	int age;
public:
	Human(const char* name, int age) 
	{
		cout << "일반 생성자 호출" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	Human(const Human& other)
	{
		cout << "복사 생성자 호출" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
	Human(Human&& other) noexcept	//rvalue 참조
	{
		cout << "이동 생성자 호출" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
	void viewHuman() 
	{
		cout << "이름: " << name << "나이: " << age << endl;
	}
};

int main()
{
	Human h1("홍길동" ,124);
	h1.viewHuman();

	Human h2(h1);	//복사생성자
	h2.viewHuman();

	Human h3(move(h1)); //이동생성자
	h3.viewHuman();

	//int num = 10;
	//int& rnum = num; //rvalue 참조 

	//int&& rrum = 100;	// lvalue 참조 
	return 0;
}