#include<iostream>
using namespace std;
class fold{
    private:
    int x;
    public:
    void findgs();
};
void fold::findgs(){
    x=10;
    int i,n,s;
    int a[x];
    cout<<"Enter the numbers: "<<endl;
    for(i=0;i<x;i++){
        cin>>a[i];
    }
    n=a[0];
    for(i=0;i<x;i++){
        if(n<a[i])
            n=a[i];
    }
    cout<<"The largest value is: "<<n<<endl;
    s=a[0];
    for(i=0;i<x;i++){
        if(s>a[i])
            s=a[i];
    }
    cout<<"The smallest value is: "<<s<<endl;
}
int main(){
    fold p;
    p.findgs();
}