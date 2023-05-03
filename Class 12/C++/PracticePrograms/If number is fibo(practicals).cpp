#include<iostream>
using namespace std;
class fibo
{
private:
	short int N;
	int a, b, c,i;
public:
	fibo();
};
fibo::fibo()
{
	a = 0;
	b = 1;
	cout << "Enter a number:\n";
	cin >> N;
	while (c <= N+1)
	{
		c = a + b;
		a = b;
		b = c;
		if (c == N)
			cout << "" << N << " is a fibonacci number.\n";
	}
	if (c > N)
		cout << "It is not a fibonacci number\n";
}
int main()
{
	fibo a;
}