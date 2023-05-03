#include<iostream>
#include<fstream>
using namespace std;
void input(){
    int n;
    char cont[50],cap[50];
    ofstream fout1,fout2;
    fout1.open("country.txt");
    fout2.open("capital.txt");
    cout<<"Enter the number of countries: ";
    cin>>n;
    while(n>0){
        cout<<"Enter the country: ";
        cin>>cont;
        fout1<<cont<<endl;
        cout<<"Enter the capital: ";
        cin>>cap;
        fout2<<cap<<endl;
        n--;
    }
    fout1.close();
    fout2.close();
}
void output(){
    ifstream fin1,fin2;
    char cont[50],cap[50];
    fin1.open("country.txt");
    fin2.open("capital.txt");
    cout<<"Country\t\tCapital\n";
    while(fin1){
        fin1>>cont;
        cout<<cont<<"\t\t";
        fin2>>cap;
        cout<<cap<<"\n";
    }
    fin1.close();
    fin2.close();
}
int main(){
    input();
    output();
    return 0;
}