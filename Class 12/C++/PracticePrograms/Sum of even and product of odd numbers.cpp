#include<iostream>
using namespace std;
class ARRAY
{
private:
	short int list[30];
	unsigned short int N;
	void process();
	void show();
	int pod, se;
public:
	ARRAY();
};
ARRAY::ARRAY()
{
	cout << "How many number do you wish to enter into the array?\n";
	cin >> N;
	cout << "Enter the elements into the array:\n";
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
	}
	process();
	show();
}
void ARRAY::process()
{
	pod = 1;
	se = 0;
	for (int l = 0; l < N; l++)
	{
		if (list[l] % 2 == 0)
		{
			se = se + list[l];
		}
		else
		{
			pod = pod * list[l];
		}
	}
	cout << "The sum of all the even numbers is:" << se << endl;
	cout << "The product of all the odd numbers is:" << pod << endl;
}
void ARRAY::show()
{
	cout << "The given array is:\n";
	for (int i = 0; i < N; i++)
	{
		cout << list[i] << endl;
	}
}
int main()
{
	ARRAY a;
	return 0;
}