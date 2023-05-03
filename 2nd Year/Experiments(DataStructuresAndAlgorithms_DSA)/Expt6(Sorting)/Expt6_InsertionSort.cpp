#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void disp(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<"Pass "<<i+1<<endl;
        disp(a,n);
        for(int j=i;j>=0;j--)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j],a[j+1]);
            }
        }
        disp(a,n);
        cout<<endl;
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
    cout<<"Insertion sort algorithm...\n";
    sort(a,n);
    cout<<"The sorted array is:\n";
    disp(a,n);
    return 0;
}