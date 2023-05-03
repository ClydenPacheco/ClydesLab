//To reverse a number
#include<stdio.h>
void main()
{
    int s=0,r=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("The reverse number is %d",s);
}