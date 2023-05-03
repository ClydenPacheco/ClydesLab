#include<iostream>
using namespace std;
class BUBBLE
{
private:
	short int list[30];
	short unsigned int N;
	int i, j;
	void sort();
	void show();
public:
	BUBBLE();
};
BUBBLE::BUBBLE()
{
	cout << "How many elements do you want to enter?\n";
	cin >> N;
	cout << "Enter the elements:\n";
	for (i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]\t";
		cin >> list[i];
	}
	sort();
	show();
}
void BUBBLE::sort()
{
	int t;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < (N - 1) - i;j++)
		{
			if (list[j] > list[j + 1])
			{
				t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
			}
		}
	}
}
void BUBBLE::show()
{
	cout << "The sorted array is:\n";
	for (i = 0; i < N; i++)
	{
		cout << list[i] << "\t";
	}
}
int main()
{
	BUBBLE a;
	return 0;
}