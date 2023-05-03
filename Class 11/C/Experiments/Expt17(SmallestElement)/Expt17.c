//C Program to find the smallest emement in an array
#include<stdio.h>
int main()
{
    int i,n,s;
    printf("How many elements do you want to enter into the array? ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements into the array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<s)
        {
            s=a[i+1];
        }
    }
    printf("The smallest element in the array is %d",s);
    return 0;
}