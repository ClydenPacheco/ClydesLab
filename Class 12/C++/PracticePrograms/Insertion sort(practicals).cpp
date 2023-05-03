#include<iostream>
using namespace std;
class INSERT
{
private:
	short int list[30];
	short unsigned int N;
	int i, j;
	void sort(), show();
public:
	INSERT();
};
INSERT::INSERT()
{
	cout << "How many elements do you wish to enter into the array?\n";
	cin >> N;
	cout << "Enter the elements:\n";
	for (i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]\t";
		cin >> list[i];
		cout << endl;
	}
	sort();
	show();
}
void INSERT::sort()
{
	int t;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (list[j] > list[i])
			{
				t = list[j];
				list[j] = list[i];
				list[i] = t;
			}
		}
	}
}
void INSERT::show()
{
	cout << "The sorted array is:\n";
	for (i = 0; i < N; i++)
	{
		cout << list[i]<<"\t";
	}
}
int main()
{
	INSERT a;
	return 0;
}