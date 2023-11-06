#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="fast",s2="fats";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        cout<<"Anagram!";
    else
        cout<<"Not anagram!";
    return 0;
}