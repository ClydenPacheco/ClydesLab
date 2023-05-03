#include<iostream>
using namespace std;
void disp(int a[],int l,int h){
    for(int i=l;i<=h;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(int a[],int l,int m,int h){
    int k=l;
    int i=l;
    int j=m+1;
    int temp[100];
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            i++;
            k++;
        }
        else{
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        temp[k]=a[j];
        j++;
        k++;
    }
    for(int x=l;x<=h;x++)
        a[x]=temp[x];
}
void merge_sort(int a[],int l,int h,int n){
    cout<<"l="<<l<<" h="<<h<<endl;
    cout<<"Level of recursive call: "<<n<<endl;
    cout<<"Subarray elements:\n";
    disp(a,l,h);
    int m;
    if(l<h){
        m=(l+h)/2;
        merge_sort(a,l,m,n+1);
        merge_sort(a,m+1,h,n+1);
        merge(a,l,m,h);
        cout<<"Sorted subarray:\n";
        disp(a,l,h);
    }
}
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    int a[100];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"\nThe array before sorting:\n";
    disp(a,0,n-1);
    cout<<"\nMerge sort algorithm:\n";
    merge_sort(a,0,n-1,1);
    cout<<"\nArray after sorting:\n";
    disp(a,0,n-1);
    cout<<"\nAnalyzing total time complexity:\n";
    cout<<"T(n)=O(1)+2T(n/2)+O(n)+O(1)\n";
    cout<<"T(n)=2T(n/2)+O(n)\n";
    cout<<"2T(n/2)-->To divide the array\n";
    cout<<"constant*n-->Merge the array\n";
    cout<<"2*T(n/2)+constant*n\n";
    cout<<"Substitute: n/2-->n/4\n";
    cout<<"T(n)=2*(2*T(n/4)+constant*n/2)+constant*n\n";
    cout<<"T(n)=4*T(n/4)+2*constant*n\n";
    cout<<"Where n can be subtituted to 2^k and the value of k is logN\n";
    cout<<"T(n)=2^k*T(n/(2^k))+k*constant*n\n";
    cout<<"T(n)=n*T(1)+n*logN\n";
    cout<<"T(n)=O(n*log(n))\n";
    return 0;
}