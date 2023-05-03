#include<iostream>
using namespace std;
class trans{
    private:
    int m,n;
    public:
    void getv();
    void tra();
};
void trans::getv(){
    cout<<"Enter the number of rows:"<<endl;
    cin>>m;
    cout<<"Enter the number of columns:"<<endl;
    cin>>n;
    while(n==m){
        cout<<"Please re-enter the value"<<endl;
        cin>>n;
    }
}
void trans::tra(){
    int a[m][n];
    int i,j;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The original matrix is:"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int x,y;
    x=n;
    y=m;
    int b[x][y];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    cout<<"The transpose array is:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    trans a;
    a.getv();
    a.tra();
    return 0;
}