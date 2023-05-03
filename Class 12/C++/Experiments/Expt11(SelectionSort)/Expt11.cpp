#include<iostream>
using namespace std;
class selection{
    private:
    int i,j,k,t,n,a[100];
    public:
    void sortnum();
};
void selection::sortnum(){
    cout<<"How many numbers would you like to enter? ";
    cin>>n;
    cout<<"Enter the numbers: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The unsorted array is: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++){
        cout<<i+1<<" iteration"<<endl;
        for(j=i;j<n;j++){
            if(a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            cout<<endl;
            for(k=0;k<n;k++){
                cout<<a[k]<<"\t";
            }
        }
        cout<<endl;
    }
}
int main(){
    selection a;
    a.sortnum();
    return 0;
}