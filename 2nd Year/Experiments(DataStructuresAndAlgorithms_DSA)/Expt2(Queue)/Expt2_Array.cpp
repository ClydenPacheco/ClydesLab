//To implment a queue using an array
#include<iostream>
using namespace std;
class queueof
{
private:
	int rear, front,  queue[100], i, n;
public:
	void enqueue();
	void dequeue();
	void disp();
	queueof(int);
};
queueof::queueof(int N)
{
	rear = -1;
	front = -1;
	n = N - 1;
}
void queueof::enqueue()
{

	if (rear >= n)
	{
		cout << "No more elements can be entered into the queue!\n";
	}
	else
	{
		cout << "Enter the element: ";
		rear++;
		cin >> queue[rear];
		if (front == -1)
		{
			front++;
		}
	}
}
void queueof::dequeue()
{
	if (front == -1)
	{
		cout << "Queue is empty!\n";
	}
	else
	{
		cout << queue[front] << " Has been dequeued\n";
		for (int i = front; i <= rear; i++)
		{
			queue[i] = queue[i + 1];
		}
		rear--;
		if (rear==-1)
		{
			front=rear;
		}
	}
}
void queueof::disp()
{
	if (rear == -1)
	{
		cout << "Queue is empty!\n";
	}
	else
	{
		cout << "Elements in the queue are:\n";
		for (i = front; i <= rear; i++)
		{
			cout << queue[i] << endl;
		}
	}
}
int main()
{
	int n, cho;
	cout << "Enter the size of the queue: ";
	cin >> n;
	queueof a(n);
	do
	{
		cout << endl;
		cout << "************************************\n";
		cout << "Choose one of the available options:\n";
		cout << "1 to enqueue an element\n";
		cout << "2 to dequeue an element\n";
		cout << "3 to display\n";
		cout << "4 to exit\n";
		cout << "Enter: ";
		cin >> cho;
		switch (cho)
		{
		case 1:
		{
			a.enqueue();
			break;
		}
		case 2:
		{
			a.dequeue();
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