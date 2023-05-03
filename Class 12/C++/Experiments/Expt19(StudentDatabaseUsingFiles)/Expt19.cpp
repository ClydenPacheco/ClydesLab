#include<iostream>
#include<fstream>
using namespace std;
class student{
    int rollno,marks[6];
    char name[30];
    public:
    void input();
    void show();
};
void student::input(){
    int n;
    ofstream fout;
    fout.open("student.txt");
    cout<<"Enter the number of students: ";
    cin>>n;
    while(n>0){
        cout<<"Enter the roll number: ";
        cin>>rollno;
        fout<<rollno<<endl;
        cout<<"Enter the name: ";
        cin>>name;
        fout<<name<<endl;
        cout<<"Enter marks out of 100:\n";
        for(int i=0;i<6;i++){
            cout<<"Subject: "<<i+1<<": ";
            cin>>marks[i];
            fout<<marks[i]<<endl;
        }
        n--;
    }
}
void student::show(){
    ifstream fin;
    int c=0,t;
    fin.open("student.txt");
    int j=1;
    while(fin){
        fin>>rollno;
        cout<<"RollNo: "<<rollno<<endl;
        fin>>name;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: ";
        for(int i=0;i<6;i++){
            fin>>marks[i];
            c=c+marks[i];
            cout<<"Subject"<<i+1<<": ";
            cout<<marks[i]<<"\t";
        }
        cout<<endl;
        t=c/6;
        c=0;
        cout<<"Percentage: "<<t<<endl<<endl<<endl;
        j++;
    }
    fin.close();
}
int main(){
    student a;
    a.input();
    a.show();
}