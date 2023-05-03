#include<iostream>
using namespace std;
class NUMBER_LIST{
    private:
    int num_list[10];
    public:
    void read_list();
    void calc_prod();
};
void NUMBER_LIST::read_list(){
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<10;i++){
        cin>>num_list[i];
    }
    cout<<"The entered numbers are:";
    for(int i=0;i<10;i++){
        cout<<num_list[i]<<endl;
    }
}
void NUMBER_LIST::calc_prod(){
    int a=1;
    for(int i=0;i<10;i++){
        a=a*num_list[i];
    }
    cout<<"The product is: "<<a<<endl;
}
int main(){
    NUMBER_LIST a;
    a.read_list();
    a.calc_prod();
    return 0;
}