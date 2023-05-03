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
int purvert(int l,int h, int a[])
{
    int puv=a[l];
    int i=l,j=h;
    while(i<j)
    {
        do
        {
            i++;
        } while (a[i]<=puv);
        do
        {
            j--;
        } while (a[j]>puv);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}
void sort(int l,int h,int a[])
{
    int j=purvert(l,h,a);
    if(l<h)
    {
        sort(l,j,a);
        sort(j+1,h,a);
    }
}
int main()
{
    cout<<"How many elements would you like to enter into the array? ";
    int n;
    cin>>n;
    int a[n+1];
    cout<<"Enter the elements into the array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    a[n]=2147483647;
    cout<<"The unsorted array is:\n";
    disp(a,n);
    cout<<"Quick sort algorithm...\n";
    sort(0,n,a);
    cout<<"The sorted array is:\n";
    disp(a,n);
    return 0;
}