#include <iostream>
using namespace std;

class CountyArea
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;

};

int main(void)
{
	cout << "���þ� ����: " << CountyArea::RUSSIA << "Km^2" << endl;
	cout << "ĳ���� ����: " << CountyArea::CANADA << "Km^2" << endl;
	cout << "�߱� ����: " << CountyArea::CHINA << "Km^2" << endl;
	cout << "�ѱ� ����: " << CountyArea::SOUTH_KOREA << "Km^2" << endl;
}