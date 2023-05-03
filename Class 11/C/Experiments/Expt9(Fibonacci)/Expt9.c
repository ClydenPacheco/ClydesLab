//C Program to produce fibonacci sequence
#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    unsigned int s;
    printf("How many numbers of the series would you like to print? ");
    scanf("%d",&s);
    while(s==0)
    {
        printf("Fibonacci series can't be produced, enter a valid input! ");
        scanf("%d",&s);
    }
    printf("The requested series is: \n");
    if(s==1)
    printf("%d",a);
    else if(s==2)
    printf("%d\t%d\t",a,b);
    else
    {
        printf("%d\t%d\t",a,b);
        for(int i=0;i<s-2;i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d\t",c);
        }
    }
    return 0;
}