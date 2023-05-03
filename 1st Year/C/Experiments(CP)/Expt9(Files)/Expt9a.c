//File I/O
#include<stdio.h>
struct inventory
{
     char name[50];
     int number;
     float price;
     int quantity;
};
void main()
{
     struct inventory item;
     char filename[20];
     int c;
     FILE *fp;
     long n;
     void append(struct inventory *x,FILE *Y);
     printf("Enter file name: ");
     scanf("%s",filename);
     fp=fopen(filename,"a+");
     do
     {
         append(&item,fp);
         printf("\nItem %s appended!\n",item.name);
         printf("Do you want to add another item? (1-Yes/0-No)\n");
         scanf("%d",&c);
     } while (c==1);
     n=ftell(fp);
     fclose(fp);
     printf("Item Name    Number    Price    Quantity\n ");
     printf("----------------------------------------\n");
     fp=fopen(filename,"r");
     while(ftell(fp)<n)
     {
         fscanf(fp,"%s %d %f %d",item.name,&item.number,&item.price,&item.quantity);
         fprintf(stdout,"%-14s %-7d %-11.2f %-8d\n",item.name,item.number,item.price,item.quantity);
         printf("----------------------------------------\n");
     }
     fclose(fp);
}
void append(struct inventory *product,FILE *ptr)
{
    printf("Item name: ");
    scanf("%s",product->name);
    printf("Item number: ");
    scanf("%d",&product->number);
    printf("Item price: ");
    scanf("%f",&product->price);
    printf("Item quantity: ");
    scanf("%d",&product->quantity);
    fprintf(ptr,"%s %d %.2f %d\n",product->name,product->number,product->price,product->quantity);
}