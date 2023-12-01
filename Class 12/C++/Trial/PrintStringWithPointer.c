#include<stdio.h>
#include<string.h>
void printstring(char[]);
int main(){
    int i;
    char a[15];
    printf("Enter the string: ");
    gets(a);
    printstring(a);
    return 0;
}
void printstring(char a[]){
    char *ptr;
    ptr=&a[0];
    int i;
    printf("The entered string is: ");
    for(i=0;*ptr!='\0';i++,ptr++){
        printf("%c",*ptr);
    }
}