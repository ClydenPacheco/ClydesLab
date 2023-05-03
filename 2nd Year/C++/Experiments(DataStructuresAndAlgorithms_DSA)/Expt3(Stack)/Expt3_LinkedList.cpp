#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;
void pushdata(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
void popdata()
{
	if (top == NULL)
		cout << "Stack is empty!\n";
	else
	{
		cout << top->data << " has been popped\n";
		node *temp;
		temp = top;
		top = top->next;
		delete temp;
	}
}
void revdisp()
{
	node *ptr;
	if (top == NULL)
		cout << "Stack is empty!\n";
	else
	{
		ptr = top;
		while (ptr)
		{
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
}
int main()
{
	int ch,val;
	do
	{
		cout << "Enter the number corresponding to the available options:\n";
		cout << "1. Push node\n";
		cout << "2. Pop node\n";
		cout << "3. Display Stack\n";
		cout << "4. Exit\n";
		cout << "Choice: ";
		cin >> ch;
		switch (ch)
		{
		    case 1:
		    {
				cout << "Enter the element to be inserted: ";
				cin >> val;
				pushdata(val);
				break;
		    }
		    case 2:
		    {
				popdata();
				break;
		    }
		    case 3:
		    {
				revdisp();
				break;
		    }
		    case 4:
		    {
			    cout<<"Exiting...\n";
                break;
		    }
		    default:
		    {
			    cout << "Invalid input!\n";
			    break;
		    }
		}
	} while (ch != 4);
	system("pause");
	return 0;
}