#include<iostream>
using namespace std;
class queue1{
    private:
    struct node{
        int data;
        node *link;
    }*front,*rear;
    public:
    queue1();
    void enqueue(float);
    void dequeue();
    void display();
};
queue1::queue1(){
    front=rear=NULL;
}
void queue1::enqueue(float n){
    cout<<n<<" has been enqueued\n";
    node *temp;
    temp=new node;
    temp->data=n;
    temp->link=NULL;
    if(rear==NULL){
        front=temp;
        rear=temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
}
void queue1::dequeue(){
    if(front==NULL)
        cout<<"Queue is currently empty!\n";
    else{
        node *temp;
        temp=front;
        cout<<temp->data<<" has been dequeued\n";
        front=front->link;
        delete temp;
        if(front==NULL)
            rear=front;
    }
}
void queue1::display(){
    node *temp;
    temp=front;
    if(front==NULL)
        cout<<"Queue is empty\n";
    else{
        cout<<"Queue elements are:\n";
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }
}
int main(){
    int a,n;
    queue1 q;
    do{
        cout<<"Enter the number corresponding to the options:\n";
        cout<<"1. Enqueue()\n";
        cout<<"2. Dequeue()\n";
        cout<<"3. Dispaly()\n";
        cout<<"4. Exit\n";
        cout<<"Option: ";
        cin>>a;
        switch(a){
            case 1:{
                cout<<"Enter the element: ";
                cin>>n;
                q.enqueue(n);
                break;
            }
            case 2:{
                q.dequeue();
                break;
            }
            case 3:{
                q.display();
                break;
            }
            case 4:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Invalid input!\n";
                break;
            }
        }
    }while(a!=4);
    return 0;
}