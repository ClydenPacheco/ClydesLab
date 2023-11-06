#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=57;
    int d[10]={0},i=0;
    while(n!=0){
        if(n%2==1)
            d[i]=1;
        else
            d[i]=0;
        i++;
        n=n/2;
    }
    for(int i=10-1;i>=0;i--){
        cout<<d[i];
    }
    return 0;
}