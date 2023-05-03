#include<iostream>
using namespace std;
class product{
    private:
    int m1[10][10],m2[10][10],p[10][10],r1,c1,r2,c2,i,j,k;
    public:
    void findp();
};
void product::findp(){
    cout<<"Enter the number of rows & columns of M1:\n";
    cin>>r1>>c1;
    cout<<"Enter the number of rows & columns of M2:\n";
    cin>>r2>>c2;
    while(c1!=r2){
        cout<<"Error! Number of columns of m1 and rows of M2 have to be equal!\n";
        cout<<"Enter the number of rows of M2: ";
        cin>>r2;
    }
    cout<<"Enter elements of M1:\n";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"M1 matrix:\n";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<m1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter elements of M2:\n";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }
    cout<<"M2 matrix:\n";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<m2[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            p[i][j]=0;
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                p[i][j]=p[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"Product matrix: \n";
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    product a;
    a.findp();
    return 0;
}