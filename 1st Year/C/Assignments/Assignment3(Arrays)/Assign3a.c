//To find the number of positive numbers, negative numbers and zeros in an array
#include<stdio.h>
void main()
{
    int i,num,a[20],p=0,n=0,z=0;
    printf("How many numbers do you wish to enter in the array? ");
    scanf("%d",&num);
    printf("Enter the numbers into the array:\n");
    for(i=0;i<num;i++)
    {
        printf("[%d] ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        n++;
        else
        z++;
    }
    printf("There are %d positive, %d negative number(s) and %d zero(s) in the array",p,n,z);
}