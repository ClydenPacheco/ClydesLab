#include<iostream>
using namespace std;
int deque[100],n,front=-1,rear=-1;
void entfromfront()
{
    if(front==-1)
    {
        front++;
        rear++;
        cout<<"Enter the element: ";
        cin>>deque[front];
    }
    else
    {
        if(front-1==rear || (front==0 && rear==n-1))
        {
            cout<<"Queue is full!\n";
        }
        else if(front==0)
        {
            front=n-1;
            cout<<"Enter the element: ";
            cin>>deque[front];
        }
        else
        {
            front--;
            cout<<"Enter the element: ";
            cin>>deque[front];
        }
    }
}
void delfromfront()
{
    if(front==-1)
    {
        cout<<"Queue is empty!\n";
    }
    else
    {
        cout<<deque[front]<<" has been deleted from the front of the queue.\n";
        front=(front+1)%n;
        if(front==(rear+1)%n)
        {
            front=-1;
            rear=-1;
        }
    }
}
void entfromrear()
{
    if(front==-1)
    {
        front++;
        rear++;
        cout<<"Enter the element: ";
        cin>>deque[rear];
    }
    else
    {
        if((rear+1)%n==front)
        {
            cout<<"Queue is full!\n";
        }
        else
        {
            rear=(rear+1)%n;
            cout<<"Enter the element: ";
            cin>>deque[rear];
        }
    }
}
void delfromrear()
{
    if(rear==-1)
    {
        cout<<"Queue is empty!\n";
    }
    else if(rear==0 && front==0)
    {
        cout<<deque[rear]<<" has been deleted from the rear of the queue.\n";
        rear=-1;
        front=-1;
    }
    else if(rear==0 && front!=0)
    {
        cout<<deque[rear]<<" has been deleted from the rear of the queue.\n";
        rear=n-1;
    }
    else
    {
        cout<<deque[rear]<<" has been deleted from the rear of the queue.\n";
        rear--;
        if(rear==front-1)
        {
            rear=-1;
            front=-1;
        }
    }
}
void revdisp()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty!\n";
    }
    else
    {
        if(front<=rear)
        {
            cout<<"Queue elements are:\n";
            for(int i=front;i<=rear;i++)
            {
                cout<<"["<<i<<"] "<<deque[i]<<endl;
            }
        }
        else
        {
            cout<<"Queue elements are:\n";
            for(int i=front;i<=n-1;i++)
            {
                cout<<"["<<i<<"] "<<deque[i]<<endl;
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<"["<<i<<"] "<<deque[i]<<endl;
            }
        }
    }
}
int main()
{
    int ch;
    cout<<"Enter the size of the queue: ";
    cin>>n;
    do
    {
        cout<<"Enter the number corresponding to one of the folloing options:\n";
        cout<<"1. To enter from front\n";
        cout<<"2. To delete from front\n";
        cout<<"3. To enter from rear\n";
        cout<<"4. To delete from rear\n";
        cout<<"5. To display queue contents\n";
        cout<<"6. To exit\n";
        cout<<"Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                entfromfront();
                break;
            }
            case 2:
            {
                delfromfront();
                break;
            }
            case 3:
            {
                entfromrear();
                break;
            }
            case 4:
            {
                delfromrear();
                break;
            }
            case 5:
            {
                revdisp();
                break;
            }
            case 6:
            break;
            default:
            {
                cout<<"Invalid input!\n";
                break;
            }
        }
    } while (ch!=6);
    return 0;
}