//C program to interchange 2 values without using third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the values: ");
    scanf("%d%d",&x,&y);
    printf("Before interchanging:\n x=%d y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After interchanging:\n x=%d y=%d\n",x,y);
    return 0;
}