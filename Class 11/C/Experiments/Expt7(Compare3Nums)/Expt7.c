//C Program to compare 3 numbers
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter th numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    printf("The first number is the greatest\n");
    else if(y>z&&y>x)
    printf("The second number is the greatest\n");
    else if(z>x&&z>y)
    printf("The third number is the greatest\n");
    else if(x>y&&y==z)
    printf("The first number is the greatest\n");
    else if(y>z&&z==x)
    printf("The second number is the greatest\n");
    else if(z>x&&x==y)
    printf("The third number is the greatest\n");
    else if(x==y&&y>z)
    printf("The first two numbers are the greatest\n");
    else if(y==z&&z>x)
    printf("The last two numbers are the greatest\n");
    else if(z==x&&x>y)
    printf("The first and last numbers are the greatest\n");
    else
    printf("They are all equal\n");
    return 0;
}