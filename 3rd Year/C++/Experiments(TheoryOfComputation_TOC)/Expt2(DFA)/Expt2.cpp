//Program to implement deterministic finite automata for regular expression (1+0)*001
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
    char str[20];
    int i,len=0,count=0,f='a';
    char c;
    do{
        cout<<"Do you wish to enter a stirng?\nEnter 'y' or 'n': ";
        cin>>c;
        if(c=='n')
            break;
        cout<<"Enter the string to be checked:"<<endl;
        cin>>str;
        len=strlen(str);
        for(i=0;str[i]!='\0';i++){
            switch (f){
                case 'a':
                    cout<<"Entered state q0\n";
                    if(str[i]=='0')
                        f='b';
                    else
                        f='a';
                    break;
                case 'b':
                    cout<<"Entered state q1\n";
                    if(str[i]=='0')
                        f='c';
                    else
                        f='a';
                    break;
                case 'c':
                    cout<<"Entered state q2\n";
                    if(str[i]=='1')
                        f='d';
                    else
                        f='c';
                    break;
                case 'd':
                    cout<<"Entered state q3\n";
                    if(str[i]=='0')
                        f='a';
                    else
                        f='b';
                    break;
            }
        }
        if(f=='d'){
            cout<<"Entered accepting state!\n";
            cout<<"String is accepted\n"<<endl;
        }
        else
            cout<<"String is not accepted\n"<<endl;
    }while(c!='n');
    cout<<"Exiting...\n";
    return 0;
}