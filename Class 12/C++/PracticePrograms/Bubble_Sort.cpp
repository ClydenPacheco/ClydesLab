#include<iostream>
using namespace std;
class bubsort
{
private:
	int t, i, j, n, a[10];
public:
	void calcdata();
};
void bubsort::calcdata()
{
	cout << "Enter size:\n";
	cin >> n;
	cout << "Enter elements:\n";
	for (i = 0; i < n;  i++)
	{
		cin >> a[i];
	}
	cout << "The array:\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	for (i = 0; i < n - 1; i++)
	{
		cout << "\n\n\n";
		cout << i + 1<<"\n";
		for (j = 0; j < (n - 1) - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
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
	bubsort a;
	a.calcdata();
	return 0;
}