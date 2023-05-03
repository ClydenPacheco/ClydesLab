//To implement queue using linked list
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
node *front=NULL;
node *rear=NULL;
node *tra;
void enq()
{
    if(front==NULL && rear==NULL)
    {
        node *temp;
        temp=new node;
        cout<<"Enter the element: ";
        cin>>temp->data;
        front=temp;
        rear=temp;
        temp->link=NULL;
    }
    else
    {
        node *temp;
        temp=new node;
        cout<<"Enter the element: ";
        cin>>temp->data;
        temp->link=NULL;
        rear->link=temp;
        rear=temp; //rear=rear->link also works here
    }
}
void deq()
{
    if(front==NULL && rear==NULL)
        cout<<"Queue is empty!\n";
    else
    {
        cout<<front->data<<" has been dequeued\n";
        node *temp;
        temp=front;
        front=front->link;
        delete temp;
        if(front==NULL)
            rear=NULL;
    }
}
void revdisp()
{
    if(front==NULL && rear==NULL)
        cout<<"Queue is empty!\n";
    else
    {
        node *n;
        n=front;
        cout<<"Elements in queue:\n";
        while(n!=NULL)
        {
            cout<<n->data<<endl;
            n=n->link;
        }
    }
}
int main()
{
    int cho;
    cout<<"||     Queue    ||\n";
    do
    {
        cout<<"Select the number corresponding to the given options:\n";
        cout<<"1 Enqueue to queue\n";
        cout<<"2 Dequeue from queue\n";
        cout<<"3 Display queue\n";
        cout<<"4 Exit\n";
        cout<<"Choice: ";
        cin>>cho;
        switch(cho)
        {
            case 1:
            {
                enq();
                break;
            }
            case 2:
            {
                deq();
                break;
            }
            case 3:
            {
                revdisp();
                break;
            }
            case 4:
            break;
            default:
            {
                cout<<"Invalid input!\n";
                break;
            }
        }
    } while (cho!=4);
    return 0;
}