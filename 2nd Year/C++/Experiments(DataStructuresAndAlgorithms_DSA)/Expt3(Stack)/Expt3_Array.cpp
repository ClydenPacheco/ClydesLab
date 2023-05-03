#include<iostream>
using namespace std;
class stackof
{
private:
	int top, stack[100], i, n;
public:
	void inpstack();
	void popstack();
	void disp();
	stackof(int);
};
stackof::stackof(int N)
{
	top = -1;
	n = N - 1;
}
void stackof::inpstack()
{

	if (top >= n)
	{
		cout << "No more elements can be entered into the stack!\n";
	}
	else
	{
		cout << "Enter the element: ";
		top++;
		cin >> stack[top];
	}
}
void stackof::popstack()
{
	if (top == -1)
	{
		cout << "Stack is empty!\n";
	}
	else
	{
		cout << stack[top] << " Has been popped\n";
		top--;
	}
}
void stackof::disp()
{

	if (top == -1)
	{
		cout << "Stack is empty!\n";
	}
	else
	{
		cout << "Elements in the stack are:\n";
		for (i = top; i >= 0; i--)
		{
			cout << stack[i] << endl;
		}
	}
}
int main()
{
	int n, cho;
	cout << "Enter the size of the stack: ";
	cin >> n;
	stackof a(n);
	do
	{
		cout << endl;
		cout << "************************************\n";
		cout << "Choose one of the available options:\n";
		cout << "1 to push an element\n";
		cout << "2 to pop an element\n";
		cout << "3 to display\n";
		cout << "4 to exit\n";
		cout << "Enter: ";
		cin >> cho;
		switch (cho)
		{
		case 1:
		{
			a.inpstack();
			break;
		}
		case 2:
		{
			a.popstack();
			break;
		}
		case 3:
		{
			a.disp();
			break;
		}
		case 4:
		{
			break;
		}
		default:
		{
			cout << "Invalid input! Re-enter!\n";
			break;
		}
		}
	} while (cho != 4);
	return 0;
}