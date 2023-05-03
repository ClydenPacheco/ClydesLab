#include<iostream>
using namespace std;
class queues
{
private:
	struct node
	{
		int data;
		node* link;
	}*front,*rear;
public:
	int getdt(int);
	void deleteq();
	void disp();
	queues();
};
queues::queues()
{
	front = rear = NULL;
}
int queues::getdt(int x)
{
	node* temp;
	temp = new node;
	temp->data = x;
	temp->link = NULL;
	if (rear == NULL)
	{
		front = temp;
		rear = temp;
	}
	else
	{
		rear->link = temp;
		rear = temp;
	}
	return 0;
}
void queues::deleteq()
{
	if (front == NULL)
	{
		cout << "The queue is empty!\n";
	}
	else
	{
		node* temp;
		temp = front;
		front = front->link;
		delete temp;
	}
}
void queues::disp()
{
	node* temp;
	temp = front;
	if (front == NULL)
	{
		cout << "The queue is empty!\n";
	}
	else
	{
		cout << "the queue is:\n";
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->link;
		}
	}
}
int main()
{
	int s, n;
	queues a;
	do
	{
		cout << "Choose one of the following options:\n";
		cout << "1.Enter node\n2.Delete node\n3.Display\n4.Exit\n";
		cin >> s;
		switch (s)
		{
		case 1:
		{
			cout << "Enter the data:\n";
			cin >> n;
			a.getdt(n);
			break;
		}
		case 2:
		{
			a.deleteq();
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
	return 0;
}