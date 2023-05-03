#include<iostream>
using namespace std;
class SMALL
{
private:
	short int a, b, c;
	int process();
public:
	SMALL();
};
SMALL::SMALL()
{
	cout << "Enter the 3 numbers:\n";
	cout << "Number [1]:\t";
	cin >> a;
	cout << "Number [2]:\t";
	cin >> b;
	cout << "Number [3]:\t";
	cin >> c;
	process();
	cout << "The smallest number is:" << process() << "\n";
}
int SMALL::process()
{
	if (a < b && b < c)
		return a;
	else if (b < c && c < a)
		return b;
	else if (b < a && a < c)
		return b;
	else if (c < b && b < a)
		return c;
	else if (a < b && b == c)
		return a;
	else if (b < a && a == c)
		return b;
	else if (c < a && a == c)
		return c;
	else if (a == b && b < c)
		return a;
	else if (b == c && c < a)
		return b;
	else if (c == a && a < b)
		return c;
}
int main()
{
	SMALL a;
}