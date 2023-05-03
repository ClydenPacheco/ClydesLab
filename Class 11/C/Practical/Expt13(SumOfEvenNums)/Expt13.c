//C Program to find the sum of n number of even numbers
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("The sum of how many even numbers do you want to find? ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        s=s+(i*2);
    }
    printf("The sum of first %d even numbers is %d",n,s);
    return 0;
}