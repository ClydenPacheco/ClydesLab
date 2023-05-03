#include<iostream>
#include<math.h>
using namespace std;
class si{
    private:
    int i,n;
    float x,sum,t;
    public:
    void cal_sin();
};
void si::cal_sin(){
    cout<<"Enter the angle: ";
    cin>>x;
    n=4;
    x=x*3.14159/180;
    t=x;
    sum=t;
    for(i=1;i<=n;i++){
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    cout<<"sin("<<x<<")="<<sum<<endl;
}
int main(){
    si a;
    a.cal_sin();
    return 0;
}
