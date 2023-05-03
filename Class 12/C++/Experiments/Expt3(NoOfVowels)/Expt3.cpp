#include<iostream>
using namespace std;
class vowels{
    private:
    int x;
    int n=0;
    public:
    void vow(){
        int i,d=0,e=0;
        char a[100];
        cout<<"Enter the string: ";
        gets(a);
        for(i=0;a[i]!='\0';i++){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                d++;
        }
        cout<<"The entered test is: "<<a<<endl;
        cout<<"The number of vowerls are: "<<d<<endl;
    }
};
int main(){
    vowels a;
    a.vow();
    return 0;
}