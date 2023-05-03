//To compare two pointers
#include<stdio.h>
void main()
{
     int num[10]={1,5,9,4,8,3,0,2,6,7},*a,*b,*c;
     a=&num[2];
     b=(num+2);
     c=&num[6];
     printf("a=%d\n",a);
     printf("b=%d\n",b);
     printf("c=%d\n",c);
     if(a==b)
     printf("a and b point to same location and the value is  %d\n",*a);
     if(a!=c)
     printf("a and c do not poin to the same location in the memory");
}