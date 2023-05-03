//C Program to reverse a number
#include<stdio.h>
int main()
{
    int n,s=0,r=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("The reverse numebr is %d",s);
    return 0;
}