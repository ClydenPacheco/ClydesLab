#include<iostream>
using namespace std;
int countdig(int);
void disp(int [],int);
int power(int,int);
int idig(int,int);
void sort(int [],int,int);
int countdig(int a)
{
   int i=0;
   if(a==0)
      return 1;
   else
   {
      while(a!=0)
      {
         a/=10;
         i++;
      }
      return i;
   }
}
void disp(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
int power(int a,int b)
{
   int i=1;
   for(int j=0;j<b;j++)
   {
      i*=a;
   }
   return i;
}
int idig(int a,int i)
{
   a=a%power(10,i);
   a=a/power(10,i-1);
   return a;
}
void sort(int a[],int n,int max)
{
   int temp[20][20],dig,l=0;
   for(int i=0;i<20;i++)
   {
      for(int j=0;j<20;j++)
      {
         temp[i][j]=0;
      }
   }
   for(int i=1;i<=max;i++)
   {
      for(int j=0;j<n;j++)
      {
         dig=idig(a[j],i);
         temp[dig+9][temp[dig+9][19]++]=a[j];
      }
      for(int j=0;j<19;j++)
      {
         for(int k=0;k<temp[j][19];k++)
         {
            a[l]=temp[j][k];
            l++;
         }
         temp[j][19]=0;
      }
      l=0;
      cout<<"Pass "<<i<<endl;
      disp(a,n);
   }
}
int main()
{
   cout<<"How many numbers would you like to enter? ";
   int n,max=0;
   cin>>n;
   int a[100];
   cout<<"Enter the elements into the array:\n";
   for(int i=0;i<n;i++)
   {
      cout<<"["<<i+1<<"]: ";
      cin>>a[i];
      if(max<countdig(a[i]))
         max=countdig(a[i]);
   }
   cout<<"The unsorted array is:\n";
   disp(a,n);
   cout<<"Merge sort algorithm...\n";
   sort(a,n,max);
   cout<<"The sorted array is:\n";
   disp(a,n);
   return 0;
}