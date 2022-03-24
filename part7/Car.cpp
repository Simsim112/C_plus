#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gas) : gasolineGauge(gas) { cout << "차 생성자" << endl; }
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
	HybridCar(int gas, int elect) : electricGauge(elect), Car(gas){ cout << "하이브리드 생성자" << endl; }
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
	HybridWaterCar(int gas, int elect,int water) : waterGauge(water), HybridCar(gas, elect) { cout << "하이브리드 워러카 생성자" << endl; }
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;

	}
};

int main()
{
	HybridWaterCar HWcar(20,40,60);
	HWcar.ShowCurrentGauge();
	return 0;
}