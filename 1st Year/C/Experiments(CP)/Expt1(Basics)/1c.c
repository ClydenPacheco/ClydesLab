//To find whether the given number is even or odd
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is an even number",n);
    else
    printf("%d is an odd number",n);
}