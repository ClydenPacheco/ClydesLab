//Program to implement push down automata for regular expression a^nb^n
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    cout<<"Enter a string: ";
    string str;
    cin>>str;
    stack <char> stck;
    stck.push('z');
    int l=str.length();
    int f=0;
    for(int i=0;i<=l;i++){
        switch(f){
            case 0:{
                if(str[i]=='a' && stck.top()=='z' || str[i]=='a' && stck.top()=='a'){
                    stck.push(str[i]);
                    f=0;
                }
                else{
                    stck.pop();
                    f=1;
                }
                break;
            }
            case 1:{
                if(str[i]=='b' && stck.top()=='a'){
                    stck.pop();
                    f=1;
                }
                else if(str[i]=='b' && stck.top()=='z')
                    goto here;
                else if(str[i]=='\0' && stck.top()=='z')
                    f=2;
                else
                    goto here;
            }
        }
    }
    here:
    if(f==2)
        cout<<"String is accepted!";
    else
        cout<<"String is rejected!";
    return 0;
}