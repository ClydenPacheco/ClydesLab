//C Program to determine if a number is prime
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime number!",n);
            c++;
            break;
        }
    }
    if(c==0)
    printf("%d is a prime number!",n);
}