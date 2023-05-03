#include<iostream>
using namespace std;
class sm{
    private:
    double d1,d2;
    int smaller();
    public:
    void get_data(double,double);
    void put_data();
};
void sm::get_data(double x,double y){
    d1=x;
    d2=y;
}
int sm::smaller(){
    if(d1<d2)
        return d1;
    else
        return d2;
}
void sm::put_data(){
    cout<<"The smaller number is: "<<smaller();
}
int main(){
    sm a;
    double x,y;
    cout<<"Enter the numbers:"<<endl;
    cin>>x>>y;
    a.get_data(x,y);
    a.put_data();
    return 0;
}