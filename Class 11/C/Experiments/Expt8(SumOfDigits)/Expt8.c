//C Program to find sum of digits of a number
#include<stdio.h>
int main()
{
    int n,s=0,r=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    printf("The sum of the digits is %d",s);
    return 0;
}