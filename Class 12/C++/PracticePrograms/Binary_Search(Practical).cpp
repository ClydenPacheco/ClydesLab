#include<iostream>
using namespace std;
class BINARY
{
private:
	short int list[30];
	short unsigned int N;
	void search();
	int f, l, m, s;
public:
	BINARY();
};
BINARY::BINARY()
{
	cout << "How many elements do you wish to enter?\n";
	cin >> N;
	cout << "Enter the elements:\n";
	for (int i = 0; i < N; i++)
	{
		cout << "Element [" << i + 1 << "]\t";
		cin >> list[i];
	}
	cout << "Enter the element to bre found:\n";
	cin >> s;
	search();
}
void BINARY::search()
{
	int t;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[j] > list[i])
			{
				t = list[j];
				list[j] = list[i];
				list[i] = t;
			}
		}
	}
	f = 0;
	l = N - 1;
	m = (f + l) / 2;
	while (f <= l)
	{
		if (s == list[m])
		{
			cout << "Element found!\n";
			break;
		}
		else if (s < list[m])
		{
			l = m - 1;
			m = (f + l) / 2;
		}
		else if (s > list[m])
		{
			f = m + 1;
			m = (f + l) / 2;
		}
	}
	if (f > l)
	{
		cout << "Element not found!\n";
	}
}
int main()
{
	BINARY a;
	return 0;
}