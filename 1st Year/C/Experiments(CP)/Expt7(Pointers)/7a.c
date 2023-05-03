//To add two numbers using pointers
#include<stdio.h>
void main()
{
    int a,b,*p,*q,s;
    printf("Enter the integers:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    p=&a;
    q=&b;
    s=*p+*q;
    printf("\nSum:\na + b \n= %d + %d \n= %d",*p,*q,s);
}