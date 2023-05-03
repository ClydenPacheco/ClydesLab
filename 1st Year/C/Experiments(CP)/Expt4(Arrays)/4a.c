//To find transpose of a matrix
#include<stdio.h>
void main()
{
    int a[10][10],transpose[10][20],r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements into the matrix:\n");
    printf("Element being entered in:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("Trnaspose of the given matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}