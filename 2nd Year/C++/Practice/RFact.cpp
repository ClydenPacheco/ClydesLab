#include<iostream>
using namespace std;
int fact(int N)
{
    if(N==0||N==1)
    return 1;
    else 
    return(N*fact(N-1));
}

int main()
{
    int n;
    //int fact(int);
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The fact is "<<fact(n);
    return 0;
}
