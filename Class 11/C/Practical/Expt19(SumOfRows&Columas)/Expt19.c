//To find the sum of the rows and columns in a matrix
#include<stdio.h>
int main()
{
    int r,c,s=0,i,j;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d",&r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d",&c);
    int m[100][100];
    printf("Enter the elements in the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[%d][%d]: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the respective rows is as given below:\n");
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s+=m[i][j];
        }
        printf("The sum of row %d is: %d\n",i+1,s);
    }
    printf("The sum of the respective columns is as given below:\n");
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<r;i++)
        {
            s+=m[i][j];
        }
        printf("The sum of column %d is: %d\n",j+1,s);
    }
    return 0;
}