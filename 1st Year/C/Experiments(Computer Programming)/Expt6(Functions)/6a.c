//To swap two numbers using call by value
#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before the swap the value of 'a' is: %d\n",a);
    printf("Before the swap the value of 'b' is: %d\n",b);
    swap(a,b);
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("After the swap the value of 'a' is: %d\n",x);
    printf("After the swap the value of 'b' is: %d\n",y);
}