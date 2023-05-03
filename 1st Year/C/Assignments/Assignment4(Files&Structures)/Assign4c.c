#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p=NULL;
    char c;
    int s;
    do
    {
        system("pause");
        system("cls");
        printf("Enter the number corresponding to the available options:\n");
        printf("1 to create/re-write a text file\n");
        printf("2 to append the existing text file\n");
        printf("3 to display the contents of the file\n");
        printf("4 to Exit\n");
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            {
                printf("Enter the text:\n");
                p=fopen("CP.txt","w");
                while((c=getchar())!=EOF)
                {
                    putc(c,p);
                }
                fclose(p);
                break;
            }
            case 2:
            {
                printf("Enter the text:\n");
                p=fopen("CP.txt","a");
                while((c=getchar())!=EOF)
                {
                    putc(c,p);
                }
                fclose(p);
                break;
            }
            case 3:
            {
                if((p=fopen("CP.txt","r"))==NULL)
                {
                    printf("File is empty!\n");
                    fclose(p);
                    break;
                }
                else
                {
                    printf("Opening CP.txt...");
                    while((c=getc(p))!=EOF)
                    {
                        printf("%c",c);
                    }
                    fclose(p);
                    break;
                }
            }
            case 4:
            break;
            default:
            {
                printf("Invalid input!\n");
                break;
            }
        }
    } while (s!=4);
}