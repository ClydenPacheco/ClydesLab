#include<iostream>
using namespace std;
class MATRIX
{
private:
	short unsigned int m, n, q;
	int a[10][10], b[10][10], c[10][10];
	void product();
	int i, j, k;
public:
	MATRIX();
};
MATRIX::MATRIX()
{
	cout << "Enter the number of rows and columns of the first matrix:\n";
	cout << "Note: the number of colums of matrix 1 will be the number of rows for matrix 2.\n";
	cin >> m >> n;
	cout << "Enter the number of columns of matrix 2:\n";
	cin >> q;
	cout << "Enter the elements in matrix 1:\n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "]\t";
			cin >> a[i][j];
			cout << endl;
		}
	}
	cout << "Enter the elements in matrix 2:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < q; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "]\t";
			cin >> b[i][j];
			cout << endl;
		}
	}
	product();
}
void MATRIX::product()
{
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			c[i][j] = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			for (k = 0; k < n; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	cout << "The product of the matrices is:\n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	MATRIX a;
	return 0;
}