//To implement the given pattern
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}