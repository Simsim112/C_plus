#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) :bullet(bnum) {}
	void Shot()
	{
		cout << "BAANG!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun* pistal;
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff) 
	{
		if (bnum > 0)
			pistal = new Gun(bnum);
		else
			pistal = NULL;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shot()
	{
		if (pistal == NULL)
			cout << "Hut BAANG!" << endl;
		else
			pistal->Shot();
	}
};

int main(void)
{
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandcuff();
	
	return 0;
}