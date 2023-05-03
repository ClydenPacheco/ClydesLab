#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout << "What do you wish the size of the array to be? ";
	int i, n;
	cin >> n;
	int a[100];
	cout << "Enter the elements:\n";
	for (i = 0;i < n;i++)
	{
		cout << "[" << i + 1 << "]: ";
		cin >> a[i];
	}
	cout << "Enter the element you wish to find: ";
	int x;
	cin >> x;
	for (i = 0;i < n;i++)
	{
		if (a[i] == x)
		{
			cout << x << " has been found at index " << i + 1 << endl;
		}
	}
	if (i == n)
		cout << "Element not found!";
	system("pause");
	return 0;
}