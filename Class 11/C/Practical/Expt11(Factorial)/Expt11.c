//C Program to find the factorial of a number
#include<stdio.h>
int main()
{
    int f,s=1;
    printf("Enter the number whose factorial you want to find: ");
    scanf("%d",&f);
    printf("The factorial of %d is ",f);
    for(int i=1;i<=f;i++)
    {
        s=s*i;
    }
    printf("%d",s);
}