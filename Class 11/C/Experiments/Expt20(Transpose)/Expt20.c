//To find the trabspose of a matrix
#include<stdio.h>
int main()
{
    int r,c,i,j,a[100][100],b[100][100];
    printf("Enter the number of rows of the matrix: ");
    scanf("%d",&r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d",&c);
    printf("Enter the elements in the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The original matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}