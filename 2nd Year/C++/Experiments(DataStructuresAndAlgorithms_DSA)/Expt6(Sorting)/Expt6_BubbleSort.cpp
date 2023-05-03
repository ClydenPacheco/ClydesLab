#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void disp(int c[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}
void sort(int b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<"Pass "<<i+1<<endl;
        disp(b,n);
        for(int j=0;j<n-(i+1);j++)
        {
            if(b[j]>b[j+1])
            {
                swap(b[j],b[j+1]);
            }
            disp(b,n);
        }
    }
}
int main()
{
    cout<<"How many elements would you like to enter? ";
    int n;
    cin>>n;
    cout<<"Enter the elements into the array:\n";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"The unsorted array is:\n";
    disp(a,n);
    cout<<endl;
    cout<<"Bubble sort algorithm...\n";
    sort(a,n);
    cout<<"The sorted array is:\n";
    disp(a,n);
}