#include<stdio.h>
void main()
{
    FILE *f1=NULL;
    char c;
    printf("Data input\n");
    f1=fopen("input.txt","w");
    while((c=getchar())!=EOF)
    {
        putc(c,f1);
    }
    fclose(f1);
    fopen("input.txt","r");
    printf("Data output:\n");
    while((c=getc(f1))!=EOF)
    {
        printf("%c",c);
    }
    fclose(f1);
}