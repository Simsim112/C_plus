#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gas) : gasolineGauge(gas) { cout << "�� ������" << endl; }
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar :public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gas, int elect) : electricGauge(elect), Car(gas){ cout << "���̺긮�� ������" << endl; }
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar :public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elect,int water) : waterGauge(water), HybridCar(gas, elect) { cout << "���̺긮�� ����ī ������" << endl; }
	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;

	}
};

int main()
{
	HybridWaterCar HWcar(20,40,60);
	HWcar.ShowCurrentGauge();
	return 0;
}