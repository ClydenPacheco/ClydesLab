//C Program to determine if a number is an armstrong number
#include<stdio.h>
int main()
{
    int n,store,r=0,s=0,t=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    store=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(s==store)
    {
        printf("%d is an armstrong number\n",store);
    }
    else
    {
        printf("%d is not an armstrong number\n",store);
    }
}