#include<iostream>
using namespace std;
class smol
{
private:
	double d1, d2;
	double smaller();
public:
	void get_data(double, double);
	void put_data();
};
void smol::get_data(double x, double y)
{
	d1 = x;
	d2 = y;
}
void smol::put_data()
{
	cout << "The entered numbers are:\n";
	cout << d1 << "&" << d2 << "\n";
	smaller();
	cout << "The smaller number is:" << smaller() << "\n";
}
double smol::smaller()
{
	if (d1 < d2)
		return d1;
	else
		return d2;
}
int main()
{
	double m, n;
	cout << "Enter a value for d1 and d2:\n";
	cin >> m>> n;
	smol a;
	a.get_data(m,n);
	a.put_data();
	return 0;
}