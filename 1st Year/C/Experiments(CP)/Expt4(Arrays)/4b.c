//To multiply matrices
#include<stdio.h>
void main()
{
    int m,n,p,q,c,d,k,sum=0;
    int first[10][10],second[10][10],multi[10][10];
    printf("First Matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    printf("Enter the elements into the first matrix:\n");
    printf("Element being entered in:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("[%d][%d]: ",c,d);
            scanf("%d",&first[c][d]);
        }
    }
    printf("The first matrix is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t",first[c][d]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d",&p);
    while(p!=n)
    {
        printf("Error! Matrix multiplication cannot take place!\n");
        printf("Re-enter the number of rows: ");
        scanf("%d",&p);
    }
    printf("Enter the number of columns: ");
    scanf("%d",&q);
    printf("Enter the elements into the second matrix:\n");
    printf("Element being entered in:\n");
    for(c=0;c<p;c++)
    {
        for(d=0;d<q;d++)
        {
            printf("[%d][%d]: ",c,d);
            scanf("%d",&second[c][d]);
        }
    }
    printf("The second matrix is:\n");
    for(c=0;c<p;c++)
    {
        for(d=0;d<q;d++)
        {
            printf("%d\t",second[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
        {
            multi[c][d]=0;
            for(k=0;k<p;k++)
            {
                multi[c][d]=multi[c][d]+first[c][k]*second[k][d];
            }
        }
    }
    printf("The product of both the matrices is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
        {
            printf("%d\t",multi[c][d]);
        }
        printf("\n");
    }
}