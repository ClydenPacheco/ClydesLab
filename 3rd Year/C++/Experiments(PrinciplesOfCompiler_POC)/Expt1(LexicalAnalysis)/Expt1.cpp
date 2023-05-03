//C++ program to implement a lexical analyser
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<set>
using namespace std;
bool isOperator(char ch){
    string operators = "+-*/%=<>#(){}\".";
    for(int i = 0; i < 15; ++i){
        if(ch == operators[i])
        return true;
    }
    return false;
}
bool isChar(char ch){
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        return true;
    return false;
}
int isKeyword(string buffer){
    string keywords[35] = {"auto","break","case","char","const",
    "continue","default","do","double","else","enum","extern",
    "float","for","goto","if","int","long","register","return",
    "short","signed","sizeof","static","struct","switch","typedef","union",
    "unsigned","void","volatile","while","include","stdioh","printf"};
    int i, flag = 0;
    for(i = 0; i < 35; i++){
        if(keywords[i]==buffer){
            flag = 1;
            break;
        }
    }
    if(buffer=="h")
        flag=2;
    return flag;
}
int main(){
    set<string>memory;
    string buffer1,buffer2,buffer3;
    char ch;
    ifstream fin("program.txt");
    int i;
    if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    while(!fin.eof()){
        ch = fin.get();
        if(isOperator(ch)){
            buffer3=buffer3+ch;
            if(memory.find(buffer3)==memory.end()){
                cout<<buffer3<<" is an operator\n";
                memory.insert(buffer3);
            }
            buffer3.clear();
        }
        if(isChar(ch))
            buffer1 = buffer1+ch;
        if(isdigit(ch))
            buffer2 = buffer2+ch;
        else if((ch == ' ' || ch == '\n' || isOperator(ch)) && !buffer1.empty() || !buffer2.empty()){
            if(buffer2.length()!=0){
                if(memory.find(buffer2)==memory.end()){
                cout<<buffer2<<" is a constant\n";
                memory.insert(buffer2);
                }
                buffer2.clear();
            }
            if(isKeyword(buffer1) == 1){
                if(memory.find(buffer1)==memory.end()){
                    cout<<buffer1<<" is a keyword\n";
                    memory.insert(buffer1);
                }
                buffer1.clear();
            }
            else if(isKeyword(buffer1) == 2){
                if(memory.find(buffer1)==memory.end()){
                    cout<<buffer1<<" is a file extension\n";
                    memory.insert(buffer1);
                }
                buffer1.clear();
            }
            else{
                if(memory.find(buffer1)==memory.end()){
                    cout<<buffer1<<" is an identifier\n";
                    memory.insert(buffer1);
                }
                buffer1.clear();
            }
        }
    }
    fin.close();
    return 0;
}
