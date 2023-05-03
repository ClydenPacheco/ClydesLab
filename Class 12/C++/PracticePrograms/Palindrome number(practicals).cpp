#include<iostream>
using namespace std;
class NUMBER
{
private:
	short unsigned int num;
	int r, s, t;
public:
	NUMBER();
};
NUMBER::NUMBER()
{
	s = 0;
	cout << "Enter the number:\n";
	cin >> num;
	t = num;
	while (num != 0)
	{
		r = num % 10;
		s = s * 10 + r;
		num /= 10;
	}
	if (s == t)
	{
		cout << t << " is a palindrome number.\n";
	}
	else
	{
		cout << t << " is not a palindrome number.\n";
	}
}
int main()
{
	NUMBER a;
	return 0;
}