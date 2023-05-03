//Program to implement turing machine to accept L= {a,b}*{a,b}{a,b}* U {a,b}*{b,a}
#include <iostream> 
using namespace std; 
string result; 
int i;
int main(){ 
    string str1; 
    int j=1,len; 
    int f=0;
    cout << "Enter a string on the tape: "; 
    cin >> str1; 
    str1="*"+str1+"*";
    len = str1.length(); 
    cout << str1; 
    while (j < len){ 
        switch (f) { 
            case 0: 
                cout << "\nIt is in q0 state"; 
                if (str1[j] == 'a'){ 
                    f = 1; 
                    j++; 
                } 
                else{ 
                    f = 3; 
                    j++; 
                } 
                break;
            case 1: 
                cout << "\nIt is in q1 state"; 
                if (str1[j] == 'a'){ 
                    f = 1; 
                    j++;
                } 
                else{ 
                    f = 2; 
                    j++; 
                } 
                break;
            case 2: 
                cout << "\nIt is in q2 state"; 
                if (str1[j] == 'a'|| str1[j] == 'b'){ 
                    f = 2;
                    j++; 
                } 
                else{ 
                    f = 5;
                    j++; 
                } 
                break;
            case 3: 
                cout << "\nIt is in q3 state"; 
                if (str1[j] == 'a'){ 
                    f = 4; 
                    j++; 
                } 
                else{ 
                    f = 3;
                    j++; 
                } 
                break;
            case 4: 
                cout << "\nIt is in q4 state"; 
                if (str1[j] == 'a'){ 
                    f = 1; 
                    j++;
                } 
                else if (str1[j] == 'b'){ 
                    f = 2;
                    j++; 
                } 
                else{ 
                    f = 5;
                    j++; 
                } 
                break;
            case 5: 
                cout << "\nIt is in the halting accepting state"; 
                goto C; 
                break;
        }
    }   
    C: 
    if (f == 5) 
        cout << "\nThe string is accepted in the turing machine"; 
    else 
        cout << "\nThe string is rejected";
return 0;
}
