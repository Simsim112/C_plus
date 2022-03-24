#include <iostream>
using namespace std;

class Person {
public:
	void sleep()
	{
		cout << "Sleep" << endl;
	}
};

class Student :public Person
{
public:
	void study()
	{
		cout << "Study" << endl;
	}
};

class PartTimeStudent :public Student
{
public:
	void three() {
		cout << "Work" << endl;
	}
};

int main()
{
	Person* ptr1 = new Student;
	Person* ptr2 = new PartTimeStudent;
	Student* ptr3 = new PartTimeStudent;
	ptr1->sleep();
	ptr2->sleep();
	ptr3->study();
	delete ptr1, ptr2, ptr3;
	return 0;
}