#include<iostream>
using namespace std;
class prod
{
private:
	int i, j, k, r1, c1, r2, c2, m1[10][10], m2[10][10], p[10][10];
public:
	void cald();
};
void prod::cald()
{
	cout << "Enter r and c of m1:\n";
	cin >> r1 >> c1;
	cout << "Enter r and c of m2:\n";
	cin >> r2 >> c2;
	while (c1 != r2)
	{
		cin >> r2;
	}
	cout << "Enter m1\n";
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			cin >> m1[i][j];
		}
	}
	cout << " m1\n";
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			cout << m1[i][j]<<"\t";
		}
		cout << endl;
	}
	cout << "Enter m2\n";
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			cin >> m2[i][j];
		}
	}
	cout << "m2\n";
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			cout << m2[i][j]<<"\t";
		}
		cout << endl;
	}
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			p[i][j] = 0;
		}
	}
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			for (k = 0; k < c1; k++)
			{
				p[i][j] = p[i][j] + m1[i][k] * m2[k][j];
			}
		}
	}
	cout << "p\n";
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			cout << p[i][j]<<"\t";
		}
		cout << endl;
	}
}
int main()
{
	prod a;
	a.cald();
	return 0;
}
