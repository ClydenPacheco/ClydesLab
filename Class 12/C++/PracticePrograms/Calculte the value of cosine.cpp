#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class SERIES
{
private:
	unsigned short int N;
	float D,l;
	int i;
	float t, s;
public:
	SERIES();
};
SERIES::SERIES()
{
	cout << "Enter the value of the angle:\n";
	cin >> D;
	l = D;
	D = D * 3.14 / 180;
	t = 1;
	s = 1;
	cout << "Enter the number of terms of whome you wish to find the sum:\n";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		t = (t * (-1) * D * D) / (2 * i * (2 * i - 1));
		s = s + t;
	}
	cout << "The value of cos("<<l<<") is:\n" << setprecision(2) << s << endl;
}
int main()
{
	SERIES a;
	return 0;
}