#include<iostream>
using namespace std;
class fibo
{
private:
	int a, b, c;
	unsigned int n;
public:
	void cgf();
};
void fibo::cgf()
{
	a = 0;
	b = 1;
	cout << "How many fibonacci numbers do you want?\n";
	cin >> n;
	if (n == 1)
	{
		cout << "The series is:\n";
		cout << a;
	//	break;
	}
	else if (n == 2)
	{
		cout << "The series is:\n";
		cout << a << "\t" << b;
	//	break;
	}
	else
	{
		cout << "The series is:\n";
		cout << a << "\t" << b<<"\t";
		for (int i = 0; i < n-2;i++)
		{
			c = a + b;
			cout << c << "\t";
			a = b;
			b = c;
		}
	//	break;
	}
}
int main()
{
	fibo a;
	a.cgf();
	return 0;
}