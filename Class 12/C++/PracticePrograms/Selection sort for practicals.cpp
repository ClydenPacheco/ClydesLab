#include<iostream>
using namespace std;
class SELECT
{
	short int list[30];
	unsigned short int N;
	void sort();
	void show();
public:
	SELECT();
};
SELECT::SELECT()
{
	cout << "How many elements do you wish to enter into th array?\n";
	cin >> N;
	cout << "Enter the elements into the array:\n";
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
	}
	sort();
	show();
}
void SELECT::sort()
{
	int t;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (list[i] > list[j])
			{
				t = list[i];
				list[i] = list[j];
				list[j] = t;
			}
		}
	}
}
void SELECT::show()
{
	cout << "The sorted array is:\n";
	for (int i = 0; i < N; i++)
	{
		cout << list[i] << "\t";
	}
}
int main()
{
	SELECT a;
	return 0;
}