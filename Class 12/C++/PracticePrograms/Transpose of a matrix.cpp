#include<iostream>
using namespace std;
class tanx
{
private:
	int m, n, x, y, i, j;
	int a[10][10], b[10][10];
public:
	void calc();
};
void tanx::calc()
{
	cout << "Enter the number of rows and columns of the matrix:\n";
	cout << "Number of rows and colums shouldn't be equal!\n";
	cin >> m;
	cin >> n;
	while (m == n)
	{
		cout << "The number of rows and colums shouldn't be equal!\n";
		cout << "Please re-enter the number of colums:\n";
		cin >> n;
	}
	cout << "Enter the elements into the matrix:\n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << i + 1 <<"x"<< j + 1<<"\t";
			cin >> a[i][j];
			cout << endl;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j]<<"\t";
		}
		cout << endl;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	cout << "The transpose of the matrix is:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	tanx a;
	a.calc();
	return 0;
}