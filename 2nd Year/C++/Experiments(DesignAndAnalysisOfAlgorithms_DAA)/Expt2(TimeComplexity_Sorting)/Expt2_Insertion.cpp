#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void disp(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        cout<<"Pass "<<i+1<<": When i="<<i<<", j will run "<<i+1<<" times.\n";
        for(int j=i;j>=0;j--){
            if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
            }
        }
        disp(a,n);
    }
}
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    int a[100];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"\nThe array before sorting:\n";
    disp(a,n);
    cout<<"\nInsertion sort algorithm:\n";
    insertion_sort(a,n);
    cout<<"\nArray after sorting:\n";
    disp(a,n);
    cout<<"\n Analyzing total time complexity:\n"; 
    cout<<"T(n)=";
    for(int i=0;i<n-1;i++)
        cout<<i+1<<"+";
    cout<<"...\n";
    cout<<"T(n)=(n(n-1))/2\nT(n)=O(n^2)\n";
    return 0;
}