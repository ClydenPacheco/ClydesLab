#include<iostream>
using namespace std;
class stacks
{
private:
	struct node
	{
		int data;
		node *link;
	}*top;
public:
	int getdt(int);
	void pop();
	void disp();
	stacks();
};
stacks::stacks()
{
	top = NULL;
}
int stacks::getdt(int x)
{
	node* temp;
	temp = top;
	if (temp == NULL)
	{
		temp = new node;
		temp->data = x;
		temp->link = NULL;
		top = temp;
	}
	else
	{
		node* temp1;
		temp1 = new node;
		temp1->data = x;
		temp1->link = top;
		top = temp1;
	}
	return 0;
}
void stacks::pop()
{
	if (top == NULL)
	{
		cout << "The stack is empty!\n";
	}
	else
	{
		node* temp;
		temp = top;
		top = top->link;
		delete temp;
	}
}
void stacks::disp()
{
	if (top == NULL)
	{
		cout << "The stack is empty!\n";
	}
	else
	{
		node* temp;
		temp = top;
		cout << "The stack:\n";
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->link;
		}
	}
}
int main()
{
	int s,n;
	stacks a;
	do
	{
		cout << "Choose one of the following options:\n";
		cout << "1.Insert node\n2.Pop node\n3.Display\n4.Exit\n";
		cin >> s;
		switch (s)
		{
			case 1 :
			{
				cout << "Enter the data:\n";
				cin >> n;
				a.getdt(n);
				break;
			}
			case 2:
			{
				a.pop();
				break;
			}
			case 3:
			{
				a.disp();
				break;
			}
			case 4:
			break;
			default:
			break;
		}
	} while (s != 4);
}