//To reverse a number using pointers
#include<stdio.h>
void main()
{
    int n,r,s=0,*N,*R,*S;
    printf("Enter the integer: ");
    scanf("%d",&n);
    N=&n;
    R=&r;
    S=&s;
    while(*N!=0)
    {
        *R=*N%10;
        *S=(*S*10)+*R;
        *N/=10;
    }
    printf("The reverse number is: %d",s);
}