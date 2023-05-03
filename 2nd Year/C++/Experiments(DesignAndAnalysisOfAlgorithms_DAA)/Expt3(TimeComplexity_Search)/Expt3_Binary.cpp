#include<iostream>
#include<math.h>
using namespace std;
void disp(int a[],int l,int r){
    for(int i=l;i<=r;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int binary_search(int a[],int l, int r, int x)
{
    cout<<"Subarray elements:\n";
    disp(a,l,r);
    int mid;
    if(r>=l)
    {
        mid=(l+r)/2;
        if(a[mid]==x){
            cout<<"mid: "<<mid+1<<", a[mid]: "<<a[mid]<<endl;
            cout<<x<<"=="<<a[mid]<<endl;
            return mid;
        }
        if(a[mid]>x){
            cout<<"mid: "<<mid+1<<", a[mid]: "<<a[mid]<<endl;
            cout<<x<<"<"<<a[mid]<<endl;
            return binary_search(a,l,mid-1,x);
        }
        cout<<"mid: "<<mid+1<<", a[mid]: "<<a[mid]<<endl;
        cout<<x<<">"<<a[mid]<<endl;
        return binary_search(a,mid+1,r,x);
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
    cout<<"Binary search algorithm:\n";
    cout<<"Search element: "<<x<<endl;
    int loc=binary_search(a,0,n-1,x);
    if(loc==-1)
        cout<<x<<" was not found in the array!\n";
    else
        cout<<x<<" has been found at location "<<loc+1<<"!\n";
    cout<<"\nAnalyzing total time complexity:\n";
    cout << "T(n)=T(n/2)+O(n)\n";
    cout << "T(n/2)-->To divide the array\n";
    cout << "constant*n-->Merge the array\n";
    cout << "T(n/2)+constant*n\n";
    for (int i = 0;i < n/2;i++) {
      cout << "For round: " << i + 1 <<endl;
      cout << "T(n)=";
      cout << "T(n/" << pow(2, i + 1) << ")+" << i + 1 << endl;
    }
    cout<<"This can be represented in the form:\n";
    cout<<"T(n)=T(n/(2^(k)) + n\n";
    cout<<"Where n can be subtituted to 2^k and the value of k is logN\n";
    cout<<"T(n)=T(n/(2^k))+n\n";
    cout<<"T(n)=T(1)+n\n";
    cout<<"T(n)=O(log(n))\n";
    return 0;
}
