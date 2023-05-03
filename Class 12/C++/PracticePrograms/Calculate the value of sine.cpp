#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
class sif
{
private:
	float x, t, s,l;
	int i,n;
public:
	void calf();
};
void sif::calf()
{
	cout << "Enter the angle:\n";
	cin >> x;
	l = x;
	x =x*3.14159 / 180;
	t = x;
	s = x;
	cout << "Enter the number of rounds for which you want to calculate the sine function:\n";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		t = (t * (-1) * x* x) /( 2*i*(2*i+1));
		s = s + t;
	}
	cout << "The value of sin("<<l<<") is:" << setprecision(2) << s << endl;
	cout <<"Using math function the value of sin("<<l<<") is:"<< sin(x)<<endl;
}
int main()
{
	sif a;
	a.calf();
	return 0;
}
