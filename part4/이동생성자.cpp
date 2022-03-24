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
		cout << "�Ϲ� ������ ȣ��" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	Human(const Human& other)
	{
		cout << "���� ������ ȣ��" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
	Human(Human&& other) noexcept	//rvalue ����
	{
		cout << "�̵� ������ ȣ��" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
	void viewHuman() 
	{
		cout << "�̸�: " << name << "����: " << age << endl;
	}
};

int main()
{
	Human h1("ȫ�浿" ,124);
	h1.viewHuman();

	Human h2(h1);	//���������
	h2.viewHuman();

	Human h3(move(h1)); //�̵�������
	h3.viewHuman();

	//int num = 10;
	//int& rnum = num; //rvalue ���� 

	//int&& rrum = 100;	// lvalue ���� 
	return 0;
}