#include<iostream>
using namespace std;
class rev
{
private:
	int n, r, s;
public:
	void fnc();
};
void rev::fnc()
{
	s = 0;
	cout << "Enter the number:\n";
	cin >> n;
	while (n != 0)
	{
		r = n % 10;
		s = s * 10 + r;
		n = n / 10;
	}
	cout << "The reverse number is:" << s << "\n";
}
int main()
{
	rev a;
	a.fnc();
	return 0;
}
