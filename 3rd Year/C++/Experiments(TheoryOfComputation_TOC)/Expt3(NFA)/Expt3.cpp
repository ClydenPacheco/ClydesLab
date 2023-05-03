//Program to implement non-deterministic finite automata for regular expression 10(0+1)*+11*(01)*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char str[20],f,g,c='y';
    while(c!='n'){
        f='a';
        g='a';
        cout<<"Do you wish to enter a string?\n";
        cout<<"Enter 'y' to enter or 'n' to exit: ";
        cin>>c;
        if(c=='n')
            break;
        cout<<"Enter the string: ";
        cin>>str;
        for(int i=0;str[i]!='\0';i++){
            switch(f){
                case 'a':
                cout<<"Entered state q0\n";
                if(str[i]=='1' && i<1)
                    f='b';
                else
                    goto thisplace;
                break;
                case 'b':
                cout<<"Entered state q1\n";
                if(str[i]=='0')
                    f='c';
                else
                    goto here;
                break;
                case 'c':
                cout<<"Entered state q2\n";
                break;
            }
        }
        here:
        for(int i=0;str[i]!='\0';i++){
            switch(g){
                case 'a':
                cout<<"Entered state q0\n";
                if(str[i]=='1' && i<1)
                    g='b';
                else
                    goto thisplace;
                break;
                case 'b':
                cout<<"Entered state q3\n";
                if(str[i]=='1')
                    g='b';
                else
                    g='c';
                break;
                case 'c':
                cout<<"Entered state q4\n";
                if(str[i]=='1')
                    g='d';
                break;
                case 'd':
                cout<<"Entered state q5\n";
                if(str[i]=='0')
                    g='c';
                break;
            }
        }
        thisplace:
        if(f=='c' || g=='b' || g=='d'){
            cout<<"Entered accepting state!\n";
            cout<<"String has been accepted!\n\n";
        }
        else
            cout<<"String has not been accepted\n\n";
    }
    cout<<"Exiting...\n";
    return 0;
}
