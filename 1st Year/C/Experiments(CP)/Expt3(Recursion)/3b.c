//To find fobonacci series using recursion
#include<stdio.h>
void main()
{
    int n,m=0,i;
    int fibonacci(int);
    printf("Enter the total number of terms:");
    scanf("%d",&n);
    printf("The fibonacci series is:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",fibonacci(m));
        m++;
    }
}
int fibonacci(int N)
{
    if(N==0||N==1)
    return N;
    else
    return(fibonacci(N-1)+fibonacci(N-2));
}