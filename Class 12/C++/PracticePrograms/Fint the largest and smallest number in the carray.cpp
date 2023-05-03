#include<iostream>
using namespace std;
class fin
{
private:
	int i,n,s, l, a[10];
public:
	void cald();
};
void fin::cald()
{
	cout << "How manu numbers do you wish to enetr?\n";
	cin >> n;
	cout << "Enter the numbers into the array:\n";
	for (i = 0; i < n;i++)
	{
		cin >> a[i];
	}
	s = l = a[0];
	cout << "The enetered elements are:\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << "\n";
	for (i = 0; i < n; i++)
	{
		if (s > a[i])
			s = a[i];
		if (l < a[i])
			l = a[i];
	}
	cout << "The smallest number is:" << s << "\n";
	cout << "The largest number is:" << l << "\n";
}
int main()
{
	fin a;
	a.cald();
	return 0;
}