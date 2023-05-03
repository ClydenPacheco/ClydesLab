//To find factorials using recursion
#include<stdio.h>
void main()
{
    int num,fact;
    int factorial(int);
    printf("Enter the number:");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of the number is: %d",fact);
}
int factorial(int N)
{
    int fct;
    if(N==0)
    return 1;
    else
    fct=N*factorial(N-1);
    return (fct);
}