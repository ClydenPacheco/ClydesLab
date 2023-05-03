#include<iostream>
using namespace std;
class binarysearch{
    int i,f,l,m,n,a[20],sear;
    public:
    void calc();
};
void binarysearch::calc(){
    cout<<"How many numbers do you wish to enter? ";
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    f=0;
    l=n-1;
    m=(f+l)/2;
    cout<<"Enter the element you wish to find: ";
    cin>>sear;
    while(f<=l){
        if(a[m]==sear){
            cout<<"Element found!\n";
            break;
        }
        else if(sear<a[m]){
            l=m-1;
            m=(f+l)/2;
        }
        else if(sear>a[m]){
            f=m+1;
            m=(f+l)/2;
        }
    }
    if(sear>a[f]||sear<a[f])
            cout<<"Element not found\n";
}
int main(){
    binarysearch a;
    a.calc();
    return 0;
}