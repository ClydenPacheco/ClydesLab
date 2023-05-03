//Addition/subtraction of a pointer
#include<stdio.h>
void main()
{
    int a=5,*x;
    char b='z',*y;
    x=&a;
    printf("x=%d\n",x);
    x+=3;
    printf("x+3=%d\n",x);
    x-=2;
    printf("x-2=%d\n",x);
    y=&b;
    printf("y=%d\n",y);
    y+=3;
    printf("y+3=%d\n",y);
    y-=2;
    printf("y-2=%d\n",y);    
}