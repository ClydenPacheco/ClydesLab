#include<iostream>
using namespace std;
class stack1{
    private:
    struct node{
        int data;
        node *link;
    }*top;
    public:
    stack1();
    void push(int);
    void pop();
    void display();
};
stack1::stack1(){
    top=NULL;
}
void stack1::push(int n){
    cout<<n<<" has been pushed to stack\n";
    node *temp;
    if(temp==NULL){
        temp=new node;
        temp->data=n;
        temp->link=NULL;
        top=temp;
    }
    else{
        temp=new node;
        temp->data=n;
        temp->link=top;
        top=temp;
    }
}
void stack1::pop(){
    if(top==NULL)
        cout<<"Stack is currently empty!\n";
    else{
        node *temp;
        temp=top;
        cout<<temp->data<<" has been popped from stack\n";
        top=top->link;
        delete temp;
    }
}
void stack1::display(){
    node *temp;
    temp=top;
    cout<<"Elements in the stack:\n";
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
int main(){
    int a,n;
    stack1 s;
    do{
        cout<<"Enter the number corresponding to the options:\n";
        cout<<"1. Push()\n";
        cout<<"2. Pop()\n";
        cout<<"3. Dispaly()\n";
        cout<<"4. Exit\n";
        cout<<"Option: ";
        cin>>a;
        switch(a){
            case 1:{
                cout<<"Enter the element: ";
                cin>>n;
                s.push(n);
                break;
            }
            case 2:{
                s.pop();
                break;
            }
            case 3:{
                s.display();
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