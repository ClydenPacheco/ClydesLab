//To enter an element in a sorted array
#include<stdio.h>
int main()
{
    int e,i,j,t,a[100],n;
    printf("How many elements would you like to enter? ");
    scanf("%d",&n);
    printf("Enter the elements into the array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-(i+2);j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[i]>e)
        {
            for(j=n-1;j>=i;j--)
            {
                a[j+1]=a[j];
            }
            a[i]=e;
            break;
        }
    }
    printf("The new array is:\n");
    for(i=0;i<=n;i++)
    {
        printf("[%d] %d\n",i+1,a[i]);
    }
    return 0;
}