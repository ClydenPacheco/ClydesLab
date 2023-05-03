#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x){
    cout<<"Linear search algorithm:\n";
    cout<<"Search element:  "<<x<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"When i="<<i+1<<", x will run 1 time\n";
            cout<<"a["<<i+1<<"]: "<<a[i]<<"=="<<x<<endl;
            return i;
        }
        cout<<"When i="<<i+1<<", x will run 1 time\n";
        cout<<"a["<<i+1<<"]: "<<a[i]<<"!="<<x<<endl;
    }
    return -1;
}
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: \n";
    int a[100];
    for(int i=0;i<n;i++){
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"\nEnter the element to be found: ";
    int x;
    cin>>x;
    cout<<endl;
    int loc=linear_search(a,n,x);
    if(loc==-1)
        cout<<x<<" was not found in the array!\n";
    else
        cout<<x<<" has been found at location "<<loc +1<<"!\n";
    cout<<"\nAnalyzing total time complexity:\n";
    cout<<"T(n)=";
    for(int i=0;i<n;i++){
        cout<<"1+";
    }
    cout<<"...\n";
    cout<<"T(n)=n\n";
    cout<<"T(n)=O(n)\n";
    return 0;
}
