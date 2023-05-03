//To implement a circular queue using an array
#include<iostream>
using namespace std;
int front=-1,rear=-1,n;
int queue[100];
void enQ()
{
   if(front==-1 && rear==-1)
   {
       front++;
       rear++;
       cout<<"Enter the number: ";
       cin>>queue[rear];
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
           cout<<"Enter the number: ";
           cin>>queue[rear];
       }
   }
}
void deQ()
{
    if(front==-1)
    {
        cout<<"Queue is empty!\n";
    }
    else
    {
        cout<<queue[front]<<" has been dequeued.\n";
        front=(front+1)%n;
        if(front==(rear+1)%n)
        {
            front=-1;
            rear=-1;
        }
    }
}
void revdisp()
{
    if(front==-1)
    {
        cout<<"Queue is empty!\n";
    }
    else
    {
        if(front<=rear)
        {
            cout<<"The queue is: \n";
            for(int i=front;i<=rear;i++)
            {
                cout<<"["<<i<<"] "<<queue[i]<<endl;
            }
        }
        else
        {
            cout<<"The queue is: \n";
            for(int i=front;i<n;i++)
            {
                cout<<"["<<i<<"] "<<queue[i]<<endl;
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<"["<<i<<"] "<<queue[i]<<endl;
            }
        }
    }
}
int main()
{
    cout<<"Enter the size of the queue: ";
    cin>>n;
    int cho;
    do
    {
        cout<<"Press the number corresponding to the numbers: \n";
        cout<<"1. To Enqueue\n";
        cout<<"2. To Dequeue\n";
        cout<<"3. To Display\n";
        cout<<"4. To Exit\n";
        cin>>cho;
        switch(cho)
        {
            case 1:
            {
                enQ();
                break;
            }
            case 2:
            {
                deQ();
                break;
            }
            case 3:
            {
                revdisp();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                cout<<"Inavlid input!\n";
                break;
            }
        }
    }while(cho!=4);
    return 0;
}