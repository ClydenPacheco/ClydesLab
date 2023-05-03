//C Program to display the number of days in the given month number
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the month number: ");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("This month has 31 days!\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11: printf("This month has 30 days!\n");
        break;
        case 2: printf("This month may have 28 days or 29 days on a leap year!");
        break;
        default: printf("Invalid input!");
        break;
    }
    return 0;
}