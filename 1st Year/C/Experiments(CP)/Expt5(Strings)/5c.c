//To copy string
#include<stdio.h>
#include<string.h>
void main()
{
    char source[10],destination[10];
    printf("Input a string: ");
    gets(source);
    strcpy(destination,source);
    printf("Source string: %s\n",source);
    printf("Destination string: %s\n",destination);
}