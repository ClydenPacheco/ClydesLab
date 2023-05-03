#include<iostream>
using namespace std;
class rev{
    private:
    int x,r,n,z;
    public:
    void findrno(){
        r=0;
        n=0;
        cout<<"Enter the number: ";
        cin>>x;
        z=x;
        while(x!=0){
            n=x%10;
            r=r*10+n;
            x=x/10;
        }
        cout<<"The entered number is: "<<z<<endl;
        cout<<"The reverse number is: "<<r<<endl;
    }
};
int main(){
    rev a;
    a.findrno();
    return 0;
}