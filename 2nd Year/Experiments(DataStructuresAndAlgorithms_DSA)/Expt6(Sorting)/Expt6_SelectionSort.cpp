#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void disp(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void sort(int a[], int n)
{
	int min;
	for (int i = 0;i < n - 1;i++)
	{
		cout << "Pass " << i + 1 << endl;
		min = i;
		for (int j = i + 1;j < n;j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
		disp(a, n);
	}
}
int main()
{
	cout << "How many elements would you like enter? ";
	int n;
	cin >> n;
	int a[100];
	cout << "Enter the elements into the array:\n";
	for (int i = 0;i < n;i++)
	{
		cout << "[" << i + 1 << "]: ";
		cin >> a[i];
	}
	cout << "The unsorted array is:\n";
	disp(a, n);
	cout << "Selection sort algorithm...\n";
	sort(a, n);
	cout<<"The sorted array is:\n";
	disp(a, n);
	return 0;
}