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
	cout << "러시아 면적: " << CountyArea::RUSSIA << "Km^2" << endl;
	cout << "캐나다 면적: " << CountyArea::CANADA << "Km^2" << endl;
	cout << "중국 면적: " << CountyArea::CHINA << "Km^2" << endl;
	cout << "한국 면적: " << CountyArea::SOUTH_KOREA << "Km^2" << endl;
}