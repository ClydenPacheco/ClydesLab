//To implement starcat
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    strcat(a,b);
    printf("After combining the final string is %s",a);
    return 0;
}