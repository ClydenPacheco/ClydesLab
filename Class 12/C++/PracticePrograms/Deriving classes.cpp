#include<iostream>
using namespace std;
class BASE
{
private:
	float num1;
public:
	float num2;
	void input_data();
	float get_num1();
};
class DERIVED:public BASE
{
private:
	float sum;
public:
	void get_data();
	void show_data();
};
void BASE::input_data()
{
	cout << "Enter the value of num1:\n";
	cin >> num1;
}
float BASE::get_num1()
{
	return num1;
}
void DERIVED::get_data()
{
	input_data();
	cout << "Enetr the value for num2:\n";
	cin >> num2;
	sum = num2 + get_num1();
}
void DERIVED::show_data()
{
	cout << "Num1:" << get_num1() << "\n";
	cout << "Num2:" << num2 << "\n";
	cout << "Sum:" << sum << "\n";
}
int main()
{
	DERIVED a;
	a.get_data();
	a.show_data();
	return 0;
}