//To print the table of a given number using a do while loop
#include<stdio.h>
void main()
{
    int i=1,number;
    printf("Enter a number:");
    scanf("%d",&number);
    do
    {
        printf("%d*%d=%d\n",number,i,number*i);
        i++;
    } while (i<=10);
}