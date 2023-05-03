#include<iostream>
using namespace std;
class mergearray{
    int i,j,k,x,y,z,n,m,a[20],b[20],c[40];
    public:
    void clac();
};
void mergearray::clac(){
    cout<<"How many numbers would you like to enter into the first array? ";
    cin>>n;
    cout<<"Enter the numbers into the first array:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"How many numbers would you like to enter into the second array? ";
    cin>>m;
    cout<<"Enter the numbers into the second array:\n";
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    y=m+n;
    k=0;
    x=0;
    z=0;
    while(k<y){
        if(a[x]<b[z]){
            c[k]=a[x];
            x++;
            k++;
        }
        else if(a[x]>b[z]){
            c[k]=b[z];
            z++;
            k++;
        }
        else{
            c[k]=a[x];
            x++;
            k++;
        }
    }
    while(x<n){
        c[k]=a[x];
        x++;
        k++;
    }
    while(z<m){
        c[k]=b[z];
        z++;
        k++;
    }
    cout<<"The merged arrays are:\n";
    for(i=0;i<y;i++){
        cout<<c[i]<<endl;
    }
}
int main(){
    mergearray a;
    a.clac();
    return 0;
}