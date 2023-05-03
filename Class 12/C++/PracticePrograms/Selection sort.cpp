#include<iostream>
using namespace std;
class slecsort
{
private:
	int t, i, j, n, a[10];
public:
	void calcdata();
};
void slecsort::calcdata()
{
	cout << "Enter the size:\n";
	cin >> n;
	cout << "Enter aray:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Array:\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		cout << "\n\n\n";
		cout << i + 1<<"\n";
		for (j = i; j < n;j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			for (int l = 0; l < n; l++)
			{
				cout << a[l] << "\t";
			}
			cout << endl;
		}
	}
}
int main()
{
	slecsort a;
	a.calcdata();
	return 0;
}