#include<iostream>
using namespace std;
class MATRIX
{
private:
	short unsigned int size;
	int TABLE[10][10];
	void process();
	int s, ns;
public:
	MATRIX();
};
MATRIX::MATRIX()
{
	cout << "Enter the size of the matrix:\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Element [" << i + 1 << "][" << j + 1 << "]\t";
			cin >> TABLE[i][j];
		}
	}
	cout << "The entered matrix is:\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << TABLE[i][j]<<"\t";
		}
		cout << endl;
	}
	process();
}
void MATRIX::process()
{
	s = 0;
	ns = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (TABLE[i][j] == TABLE[j][i])
			{
				s++;
			}
			else
				ns++;
		}
	}
	if (s > 0 && ns == 0)
		cout << "The matrix is symmeteric!\n";
	else
		cout << "The matrix is not symmetric!\n";
}
int main()
{
	MATRIX a;
	return 0;
}