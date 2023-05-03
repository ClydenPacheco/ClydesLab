#include<iostream>
using namespace std;
class BASE{
    private:
    float num1;
    public:
    float num2;
    void input_num1();
    float get_num1();
};
class DERIVED:public BASE{
    private:
    float sum;
    public:
    void get_data();
    void show_data();
};
void BASE::input_num1(){
    cout<<"Enter the value of num1: ";
    cin>>num1;
}
float BASE::get_num1(){
    return num1;
}
void DERIVED::get_data(){
    input_num1();
    cout<<"Enter the value of num2: ";
    cin>>num2;
    sum=num2+get_num1();
}
void DERIVED::show_data(){
    cout<<"The first number is: "<<get_num1()<<endl;
    cout<<"The second number is: "<<num2<<endl;
    cout<<"The sum is: "<<sum<<endl;
}
int main(){
    DERIVED a;
    a.get_data();
    a.show_data();
    return 0;
}