#include<stdio.h>
void main()
{
    FILE *p=NULL;
    char c,fn[20];
    printf("Enter file name: ");
    scanf("%s",fn);
    printf("Enter data:\n");
    p=fopen(fn,"w");
    while((c=getchar())!=EOF)
    {
        putc(c,p);
    }
    fclose(p);
    printf("Enter file name: ");
    scanf("%s",fn);
    if((p=fopen(fn,"r"))==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        fclose(p);
        printf("Enter data:\n");
        fopen(fn,"a");
        while((c=getchar())!=EOF)
        {
            putc(c,p);
        }
        fclose(p);
    }
    printf("Enter file name: ");
    scanf("%s",fn);
    p=fopen(fn,"r");
    if(p==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("Data output:");
        while((c=getc(p))!=EOF)
        {
            printf("%c",c);
        }
        fclose(p);
    }
}