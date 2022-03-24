#include <iostream>
#include <cstring>
using namespace std;

class Account
{
private:
	int Acc_num;
	int Acc_money;
	char* Acc_name;
public:
	Account(int ID, int money, char* name) ;
	Account(Account& copy);
	virtual void deposit(int money);
	int withdraw(int money);
	void print_Acc() const;
	int getAccId() const;
	~Account();
};

Account::Account(int ID, int money, char* name) : Acc_num(ID), Acc_money(money)
{
	Acc_name = new char[strlen(name) + 1];
	strcpy(Acc_name, name);
}
Account::Account(Account& copy) :Acc_num(copy.Acc_num), Acc_money(copy.Acc_money)
{
	Acc_name = new char[strlen(copy.Acc_name) + 1];
	strcpy(Acc_name, copy.Acc_name);
}
void Account::deposit(int money)
{
	Acc_money += money;
}
int Account::withdraw(int money)
{
	if (money > Acc_money)
		return 0;

	Acc_money -= money;
	return money;
}
void Account::print_Acc() const
{
	cout << "����ID: " << Acc_num << endl;
	cout << "�� ��: " << Acc_name << endl;
	cout << "�ܾ�: " << Acc_money << endl;
}
int Account::getAccId() const
{
	return Acc_num;
}
Account::~Account()
{
	delete[]Acc_name;
}

class NormalAccount :public Account
{
private:
	int interest;
public:
	NormalAccount(int ID, int money, char* name, int inter) : Account(ID, money, name), interest(inter)
	{}
	void deposit(int money)
	{
		Account::deposit(money);
		Account::deposit(money * (interest / 100.0));
	}
};

class HighCreditAccount :public NormalAccount
{
private:
	int rate;
public:
	HighCreditAccount(int ID, int money, char* name, int inter, int ra) : NormalAccount(ID, money, name, inter), rate(ra)
	{}
	void deposit(int money)
	{
		NormalAccount::deposit(money);
		Account::deposit(money * (rate / 100.0));

	}

};

class AccountHandler
{
private:
	Account* Arr[100];
	int Num = 0;
public:
	void mainMenu();
	void Account_creat();
	void Account_creat_Normal();
	void Account_creat_High();
	void deposit();
	void withdraw();
	void print_Account();
};

void AccountHandler::mainMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "���� : ";
}
void AccountHandler::Account_creat()
{
	int select;
	cout << "[������������]" << endl;
	cout << "1.���뿹�ݰ��� 2.�ſ�ŷڰ���" << endl;
	cout << "����:";
	cin >> select;
	if (select == 1)
		Account_creat_Normal();
	else if (select == 2)
		Account_creat_High();
	else
		return;

}
void AccountHandler::Account_creat_Normal()
{
	int ID, money, interest;
	char name[100];
	cout << "[���뿹�ݰ��� ����]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "�� ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;
	cout << "������: ";
	cin >> interest;
	Arr[Num++] = new NormalAccount(ID, money, name, interest);
}
void AccountHandler::Account_creat_High()
{
	int ID, money, interest, rate = 0, credit = 0;
	char name[100];
	cout << "[�ſ�ŷڰ��� ����]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "�� ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;
	cout << "������: ";
	cin >> interest;
	cout << "�ſ���(1toA, 2toB, 3toC): ";
	cin >> credit;
	switch (credit) {
	case 1:
		rate = 7;
		break;
	case 2:
		rate = 4;
		break;
	case 3:
		rate = 2;
		break;
	}
	Arr[Num++] = new HighCreditAccount(ID, money, name, interest, rate);
}
void AccountHandler::deposit()
{
	int money, ID;
	cout << "[��	��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	for (int i = 0; i < Num; i++)
	{
		if (Arr[i]->getAccId() == ID)
		{
			cout << "�Աݾ�: ";
			cin >> money;
			Arr[i]->deposit(money);
			cout << "�ԱݿϷ� " << endl;
			return;
		}
	}
	cout << "���� ���� ID�Դϴ�." << endl;
}
void AccountHandler::withdraw()
{
	int ID, money;
	cout << "[��	��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	for (int i = 0; i < Num; i++)
	{
		if (Arr[i]->getAccId() == ID)
		{
			cout << "��ݾ�: ";
			cin >> money;
			if (Arr[i]->withdraw(money) == 0)
			{
				cout << "�ܾ׺���" << endl;
				return;
			}
			cout << "��ݿϷ�" << endl;
			return;
		}
	}
	cout << "���� ���� ID�Դϴ�." << endl;
}
void AccountHandler::print_Account()
{
	for (int i = 0; i < Num; i++)
	{
		Arr[i]->print_Acc();
	}
}

int main()
{
	AccountHandler handle;
	int select;

	while (1) {
		handle.mainMenu();
		cin >> select;
		switch (select) {
		case 1:
			handle.Account_creat();
			break;
		case 2:
			handle.deposit();
			break;
		case 3:
			handle.withdraw();
			break;
		case 4:
			handle.print_Account();
			break;
		case 5:
			exit(0);
		default:
			break;
		}
	}
	return 0;
}
