#include<iostream>
using namespace std;
class bubble{
    private:
    int i,j,k,t,n,a[100];
    public:
    void sortnum();
};
void bubble::sortnum(){
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
    cout<<endl<<endl<<"Bubble sort algorithm..."<<endl;

    for(i=0;i<n-1;i++){
        cout<<i+1<<" iteration";
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            cout<<endl;
            for(k=0;k<n;k++){
                cout<<a[k]<<"\t";
            }
        }
        cout<<endl<<endl;
    }
}
int main(){
    bubble a;
    a.sortnum();
    return 0;
}