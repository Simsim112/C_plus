#include <iostream>
using namespace std;

template <typename T>
class calculator
{
private:
	T num1;
public:
	calculator(T num1 = 0);
	T operator+(const T& ref);
	T operator-(const T& ref);
	T operator*(const T& ref);
	T operator/(const T& ref);
};
template <typename T>
calculator<T>::calculator(T num) : num1(num)
{}

template <typename T>
T calculator<T>::operator+(const T& ref)
{
	T number(num1 + ref.num1);
	return number;
}

template <typename T>
T calculator<T>::operator-(const T& ref)
{
	T number(num1 - ref.num1);
	return number;
}

template <typename T>
T calculator<T>::operator*(const T& ref)
{
	T number(num1 * ref.num1);
	return number;
}

template <typename T>
T calculator<T>::operator/(const T& ref)
{
	T number(num1 / ref.num1);
	return number;
}

int main()
{
	calculator<int> num1(3);
	calculator<int> num2(5);
	calculator<int> num3 = num1+num2;
}