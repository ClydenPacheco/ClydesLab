//To implement unions
#include<stdio.h>
#include<string.h>
void main()
{
    union library
    {
        int id;
        float price;
        char name[20],author[20];
    } book;
    strcpy(book.name,"The Hobbit");
    printf("Book name: %s\n",book.name);
    book.id=567438;
    printf("Book ID: %d\n",book.id);
    strcpy(book.author,"JRR Tolkien");
    printf("Author: %s\n",book.author);
    book.price=240;
    printf("Price: %.2f\n",book.price);
}