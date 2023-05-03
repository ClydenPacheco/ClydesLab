#include<iostream>
#include<conio.h>
using namespace std;
int bins(int, int, int, int[]);
int main()
{
	cout << "How many terms do you wish to enter: ";
	int n;
	cin >> n;
	int binsea[100];
	int l, h;
	l = 0;
	h = n - 1;
	cout << "Enter the elements into the array:\n";
	for (int i = 0;i < n;i++)
	{
		cout << "[" << i+1 << "] ";
		cin >> binsea[i];
	}
	cout << "Enter the element to be searched: ";
	int srn;
	cin >> srn;
	int loc = -1;
	loc = bins(srn, l, h, binsea);
	if (loc != -1)
	{
		cout << "Element has been found at index: " << loc << endl;
	}
	else if(loc == -1)
	{
		cout << "Element not found!\n";
	}
	system("pause");
	return -1;
}
int bins(int elmt, int first, int last, int a[])
{
	int middle;
	if (last >= first)
	{
		middle = (first + last) / 2;
		if (a[middle] == elmt)
		{
			return middle+1;
		}
		else if (a[middle] > elmt)
		{
			return bins(elmt, first, middle - 1, a);
		}
		else if (a[middle] < elmt)
		{
			return bins(elmt, middle + 1, last, a);
		}
		else
		{
			return -1;
		}
	}
	return -1;
}