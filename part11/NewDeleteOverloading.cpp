#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);

	static void* operator new(size_t size)
	{
		cout << "operator new: " << size << endl;
		void* adr = new char[size];
		return adr;
	}
	static void operator delete (void* adr)
	{
		cout << "operator delete ()" << endl;
		delete[]adr;
	}
	static void Point_static();
	void Point_func();
};

void Point::Point_static()
{
	cout << "Point::Point_static()" << endl;
}
void Point::Point_func()
{
	cout << "Point::Point_func()" << endl;
}
ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}


int main(void)
{
	Point* ptr = new Point(3, 4);
	cout << *ptr;
	ptr->Point_static();
	ptr->Point_func();
	delete ptr;
	Point::Point_static();
	return 0;
}
