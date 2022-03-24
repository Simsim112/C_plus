#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
	int age;
public:

	Human(const char * aname = NULL, int aage = 0): age(aage)
	{
		if (aname != NULL) {
			name = new char[strlen(aname) + 1];
			strcpy(name, aname);
		}
	}
	Human(const Human& hu ) : age(hu.age)
	{

		name = new char[strlen(hu.name) + 1];
		strcpy(name, hu.name);
	}
	Human& operator=(const Human& hu)
	{
		delete[] name;
		age = hu.age;
		name = new char[strlen(hu.name) + 1];
		strcpy(name, hu.name);
		return*this;
	}
	void printHuman() const
	{
		cout << "이름: " << name << endl << "나이: " << age << endl;
	}
	~Human()
	{
		delete[]name;
	}
};

int main()
{
	Human man("이순신", 50);
	man.printHuman();

	Human man1(man);
	man1.printHuman();

	Human xman;
	xman = man;
	xman.printHuman();
}