#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    string s=" ";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<s;
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}