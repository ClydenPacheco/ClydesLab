//To find if a given word is a palindrom
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,c=0;
    printf("Enter the string: ");
    gets(a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
            c++;
    }
    if(c!=0)
        printf("The given string is not a palindrom!\n");
    else
        printf("The given string is a palindrom!\n");
    return 0;
}