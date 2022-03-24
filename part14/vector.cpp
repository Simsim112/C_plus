#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i + 1);
		printf("v[%d] = %d\n", i, v[i]);
	}

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//for (int i = 0; i < v1.size(); i++)
	//{
	//	v.push_back(i + 1);
	//	printf("v[%d] = %d", i, v[i]);
	//}

	//vector<int>::iterator iter;
	//for (iter = v1.begin(); iter != v1.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	vector<string> s;
	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("elephant");
	s.push_back("cow");
	vector<string>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		if (*iter == "lion") 
		{ 
			s.erase(iter);
			break;
		};
		//cout << *iter << endl;
	}

	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}