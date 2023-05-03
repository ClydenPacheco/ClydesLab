//To find whether the given number is even or odd
#include<stdio.h>
void findnum(int);
void main()
{
    int n;
    printf("Enter a number to be checked: ");
    scanf("%d",&n);
    findnum(n);
}
void findnum(int N)
{
    if(N%2==1)
    printf("%d is an odd number",N);
    else
    printf("%d is an even number",N);
}