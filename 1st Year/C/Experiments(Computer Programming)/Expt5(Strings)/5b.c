//To concatenate two srtings
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);
    strcat(s1,s2);
    printf("Combined string is: %s\n",s1);
}