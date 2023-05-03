//Subtraction of one pointer from another
#include<stdio.h>
void main()
{
    int *a,*b,n,i;
    printf("How many elements would you like to enter? ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Select the positions of any two elements:\n");
    printf("Choice(1): ");
    scanf("%d",&i);
    i-=1;
    a=&num[i];
    printf("Choice(2): ");
    scanf("%d",&i);
    i-=1;
    b=&num[i];
    printf("The values of the respective elements are %d and %d\n",*a,*b);
    printf("The addresses of the respective elements are %d and %d\n",a,b);
    printf("The number of elements between the selected elements are %d\n",b-a);
    printf("Difference: \n%d - %d \n=%d",*a,*b,*a-*b);
}