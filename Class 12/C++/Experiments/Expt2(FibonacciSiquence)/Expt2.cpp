#include<iostream>
using namespace std;
class fibo{
    private:
    int s,a,b,c;
    public:
    void calcfibo(){
        cout<<"How many number do you whish to print? ";
        cin>>s;
        while(s<1){
            cout<<"Invalid input! Plese re-enter: ";
            cin>>s;
        }
        a=0;
        b=1;
        if(s==1)
            cout<<"The fibonacci siquence is:\n"<<a<<endl;
        else if(s==2)
            cout<<"The fibonacci siquence is:\n"<<a<<"\t"<<b<<endl;
        else{
            cout<<"The fibonacci siquence is:\n"<<a<<"\t"<<b<<"\t";
            for(int i=0;i<s-2;i++){
                c=a+b;
                cout<<c<<"\t";
                a=b;
                b=c;
            }
            cout<<endl;
        }
    }
};
int main(){
    fibo f;
    f.calcfibo();
    return 0;
}