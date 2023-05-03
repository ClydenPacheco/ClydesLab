#include<iostream>
using namespace std;
class mergen
{
private:
	int n1, n2, i, j, m, n, k, a[10], b[10], c[20];
public:
	void calcn();
};
void mergen::calcn()
{
	cout << "size of first array:\n";
	cin >> n1;
	cout << "Enter array:\n";
	for (i = 0; i < n1; i++)
	{
		cin >> a[i];
	}
	cout << "size of sencond array:\n";
	cin >> n2;
	cout << "Enter array:\n";
	for (j = 0; j < n2; j++)
	{
		cin >> b[j];
	}
	m = 0;
	n = 0;
	k = 0;
	while (m < n1 && n < n2)
	{
		if (a[m] < b[n])
		{
			c[k] = a[m];
			k++;
			m++;
		}
		else if (a[m] > b[n])
		{
			c[k] = b[n];
			k++;
			n++;
		}
	}
	while (m < n1)
	{
		c[k] = a[m];
		m++;
		k++;
	}
	while (n < n2)
	{
		c[k] = b[n];
		n++;
		k++;
	}
	cout << "Merged array:\n";
	for (int g = 0; g < k; g++)
	{
		cout << c[g] << "\t";
	}
}
int main()
{
	mergen a;
	a.calcn();
	return 0;
}