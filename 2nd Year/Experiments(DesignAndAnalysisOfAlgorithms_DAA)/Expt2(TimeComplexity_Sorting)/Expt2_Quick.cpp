#include<iostream>
#include<math.h>
using namespace std;
int n;
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void disp(int a[],int l,int h){
    for(int i=l;i<=h;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int pivot(int a[],int l,int h){
    int p=a[l];
    int i=l;
    int j=h;
    while(i<j){
        while(a[i]<=p)
            i++;
        while(a[j]>p)
            j--;
        if(i<=j)
            swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}
void quick_sort(int a[],int l,int h,int n){
    int m;
    cout<<"Level of recursive call: "<<n<<endl;
    cout<<"Subarray elements:\n";
    disp(a,l,h);
    if(l<h){
        m=pivot(a,l,h);
        quick_sort(a,l,m,n+1);
        quick_sort(a,m+1,h,n+1);
        cout<<"Sorted subarray:\n";
        disp(a,0,::n-1);
    }
}
int main(){
    cout<<"Enter the number of elements: ";
    cin>>::n;
    int a[100];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cout<<"["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"\nThe array before sorting:\n";
    disp(a,0,n-1);
    cout<<"\nQuick sort algorithm:\n";
    quick_sort(a,0,n-1,1);
    cout<<"\nArray after sorting:\n";
    disp(a,0,n-1);
    cout<<"\nAnalyzing total time complexity:\n";
  cout << "T(n)=O(1)+2T(n/2)+O(n)+O(1)\n";
  cout << "T(n)=2T(n/2)+O(n)\n";
  cout << "2T(n/2)-->To divide the array\n";
  cout << "constant*n-->Merge the array\n";
  cout << "2*T(n/2)+constant*n\n";
  for (int i = 0;i < n;i++) {
	  cout << "For round: " << i + 1 <<endl;
	  cout << "T(n)=";
	  cout << pow(2, i + 1) << "*T(n/" << pow(2, i + 1) << ")+" << i + 1 << endl;
  }
  cout<<"Where n can be subtituted to 2^k and the value of k is logN\n";
  cout<<"T(n)=2^k*T(n/(2^k))+k*constant*n\n";
  cout<<"T(n)=n*T(1)+n*logN\n";
  cout<<"T(n)=O(n*log(n))\n";
    return 0;
}
