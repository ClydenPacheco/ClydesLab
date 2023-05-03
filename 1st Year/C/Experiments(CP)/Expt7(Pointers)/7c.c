//Increment/decrement of a pointer
#include<stdio.h>
void main()
{
    int a=5,*x;
    char b='z',*y;
    x=&a;
    printf("x=%d\n",x);
    x++;
    printf("x++=%d\n",x);
    x--;
    printf("x--=%d\n",x);
    y=&b;
    printf("y=%d\n",y);
    y++;
    printf("y++=%d\n",y);
    y--;
    printf("y--=%d\n",y);    
}