#include<iostream>
using namespace std;
class bins
{
private:
	int s, t, l, m, f, n, i, j, a[50];
public:
	void calc();
	void sear();
};
void bins::calc()
{
	cout << "How many elemants you wish to neter into tha array?\n";
	cin >> n;
	cout << "Enter the elements into the array:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[i])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << "In ascending order the array is:\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}
void bins::sear()
{
	cout << "Enter the element to be found:\n";
	cin >> s;
	f = 0;
	l = n - 1;
	m = (f + l) / 2;
	while (f <= l)
	{
		if (a[m] == s)
		{
			cout << "Element found\n";
			break;
		}
		else if (s < a[m])
		{
			l = m - 1;
		}
		else if (s > a[m])
		{
			f = m + 1;
		}
		m = (f + l) / 2;
	}
	if (f > l)
		cout << "Element not found\n";
}
int main()
{
	int s;
	bins a;
	do
	{
		cout << "Choose one of the following options:\n";
		cout << "1.Enter elements\n2.Search element\n3.Exit\n";
		cin >> s;
		switch (s)
		{
		case 1:
		{
			a.calc();
			break;
		}
		case 2:
		{
			a.sear();
			break;
		}
		case 3:
			break;
		default:
			break;
		}
	} while (s!=3);
}