//Program to implement coffee machine
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
    bool kill=false;
    char str[20];
    int q=0,len=0;
    cout<<"Enter the coins: ";
    cin>>str;
    len=strlen(str);
    for(int i=0;i<=len;i++){
        switch(q){
            case 0:
                if(str[i]=='1')
                    q=1;
                else if(str[i]=='2')
                    q=2;
                else
                    q=5;
                break;
            case 1:
                if(str[i]=='1')
                    q=2;
                else if(str[i]=='2')
                    q=3;
                else
                    q=6;
                break;
            case 2:
                if(str[i]=='1')
                    q=3;
                else if(str[i]=='2')
                    q=4;
                else
                    q=7;
                break;
            case 3:
                if(str[i]=='1')
                    q=4;
                else if(str[i]=='2')
                    q=5;
                else{
                    q=7;
                    cout<<"Change: 1";
                }
                break;
            case 4:
                if(str[i]=='1')
                    q=5;
                else if(str[i]=='2')
                    q=6;
                else{
                    q=7;
                    cout<<"Change: 2";
                }
                break;
            case 5:
                if(str[i]=='1')
                    q=6;
                else if(str[i]=='2')
                    q=7;
                else{
                    q=7;
                    cout<<"Change: 3";
                }
                break;
            case 6:
                if(str[i]=='1')
                    q=7;
                else if(str[i]=='2'){
                    q=7;
                    cout<<"Change: 1";
                }
                else{
                    q=7;
                    cout<<"Change: 4";
                }
                break;
            case 7:
                for(int j=i;i<len;i++){
                    cout<<str[i];
                }
                cout<<endl;
                cout<<"Coffee!"<<endl;
                break;
        }
        if(kill==true)
            break;
    }
    return 0;
}