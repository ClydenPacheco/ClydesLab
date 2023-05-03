//To find length of srtings
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int length;
    printf("Enter a string to calculate the length:\n");
    scanf("%s",&a);
    length=strlen(a);
    printf("Length of string = %d",length);
}