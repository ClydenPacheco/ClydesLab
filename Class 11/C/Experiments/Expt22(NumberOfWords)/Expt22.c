//To find the number of words in an aray
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char c=' ';
    int count=0;
    printf("Enter the string: ");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==c)
            count++;
    }
    printf("The number of words in the string are: %d",count+1);
    return 0;
}