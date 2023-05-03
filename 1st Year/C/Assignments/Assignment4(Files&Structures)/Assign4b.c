//To pass copy of entire structure to function
#include<stdio.h>
struct books
    {
        char author[20];
        char bknm[20];
        int bkno,year;
        float price;
    };
void display(struct books bk[20],int);
void main()
{
    int n,i;
    struct books bk[20];
    printf("How many books would you like to enter into the database? ");
    scanf("%d",&n);
    printf("\n\nEnter their data:\n");
    for(i=0;i<n;i++)
    {
        printf("------------------------------------------\n");
        printf("Book number: ");
        scanf("%d",&bk[i].bkno);
        printf("Namke of the book: ");
        gets(bk[i].bknm);
        gets(bk[i].bknm);
        printf("Author: ");
        gets(bk[i].author);
        printf("Year published: ");
        scanf("%d",&bk[i].year);
        printf("Price: ");
        scanf("%f",&bk[i].price);
    }
    display(bk,n);
}
void display(struct books bk[20], int N)
{
    printf("****************************************************************************************\n");
    printf("Available from the library:\n");
    printf("Sr.No.\t Book Number\t Book Name\t Author\t\t Year Published\t\t Price\n");
    for(int k=0;k<N;k++)
    {
        printf("----------------------------------------------------------------------------------------\n");
        printf("%d\t",k+1);
        printf(" %d\t\t",bk[k].bkno);
        printf(" %s\t\t",bk[k].bknm);
        printf(" %s\t\t",bk[k].author);
        printf(" %d\t\t\t",bk[k].year);
        printf(" %.2f\n",bk[k].price);
    }
    printf("----------------------------------------------------------------------------------------\n");
}