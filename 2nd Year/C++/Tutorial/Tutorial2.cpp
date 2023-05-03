#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    string inpstri;
    stack<char>s;
    cout<<"Enter a string: ";
    getline(cin,inpstri);
    for(int i=0;i<inpstri.length();i++)
    {
        s.push(inpstri[i]);
    }
    for(int i=0;i<inpstri.length();i++)
    {
        inpstri[i]=s.top();
        s.pop();
    }
    cout<<"The reverse string is: "<<inpstri;
    return 0;
}