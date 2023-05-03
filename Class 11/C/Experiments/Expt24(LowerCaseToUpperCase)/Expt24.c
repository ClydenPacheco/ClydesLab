//To convert lower case letters into upper case
#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }
    }
    printf("The new string is: ");
    puts(a);
    return 0;
}