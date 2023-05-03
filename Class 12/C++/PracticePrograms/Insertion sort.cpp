#include<iostream>
using namespace std;
class insort
{
private:
	int i, j, n, t, a[10];
public:
	void calcdata();
};
void insort::calcdata()
{
	cout << "Enter the size:\n";
	cin >> n;
	cout << "Enter the elements:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
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
		for (int l = 0; l < n; l++)
		{
			cout << a[l] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	insort a;
	a.calcdata();
	return 0;
}