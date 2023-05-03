#include<iostream>
using namespace std;
int main()
{
    int n,m=0,i;
    int fibo(int);
    cout<<"Enter how many numbers you wish to display: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<fibo(m)<<" ";
        m++;
    }
}
int fibo(int n)
{
    if(n==0||n==1)
    return n;
    else
    return(fibo(n-1)+fibo(n-2));
}