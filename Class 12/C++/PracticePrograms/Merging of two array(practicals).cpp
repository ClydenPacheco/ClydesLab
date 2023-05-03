#include<iostream>
using namespace std;
class MERGE
{
private:
	short int a[50], b[50], c[50];
	short unsigned int m, n;
	void process();
public:
	MERGE();
};
MERGE::MERGE()
{
	cout << "How many elements do you wish to enter in array 1?\n";
	cin >> m;
	cout << "Enter the elements in ascending order:\n";
	for (int i = 0; i < m; i++)
	{
		cout << "[" << i + 1 << "]\t";
		cin >> a[i];
	}
	cout << "How many elements do you wish to enter in array 2?\n";
	cin >> n;
	cout << "Enter the elements in ascending order:\n";
	for (int j = 0; j < n; j++)
	{
		cout << "[" << j + 1 << "]\t";
		cin >> b[j];
	}
	process();
}
void MERGE::process()
{
	int i, j, k;
	i = j = k = 0;
	while (i < m && j < n)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			k++;
			i++;
		}
		else if (a[i] > b[j])
		{
			c[k] = b[j];
			k++;
			j++;
		}
	}
	while (i < m)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	while (j < n)
	{
		c[k] = b[j];
		k++;
		j++;
	}
	cout << "The merged array is:\n";
	for (int l = 0; l < k; l++)
	{
		cout << "[" << l + 1 << "]\t";
		cout << c[l] << endl;
	}
}
int main()
{
	MERGE a;
}