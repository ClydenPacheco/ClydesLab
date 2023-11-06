#include <bits/stdc++.h>
using namespace std;
int main(){
    bool check=true;
    string a="abcdefedcba",b="";
    int n=a.length();
    for(int i=n-1;i>=0;i--){
        b+=a[i];
    }
    if(a==b)
        cout<<"palindrome!";
    else
        cout<<"not palindrome!";
    return 0;
}