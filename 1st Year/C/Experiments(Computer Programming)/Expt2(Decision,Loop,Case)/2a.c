//To implement a calculator using switch case
#include<stdio.h>
void main()
{
    char operator;
    float first,second;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter the two operands:\n");
    scanf("%f%f",&first,&second);
    switch(operator)
    {
        case '+':
            printf("%.1f+%.1f=%.1f",first,second,first+second);
            break;
        case '-':
            printf("%.1f-%.1f=%.1f",first,second,first-second);
            break;
        case '*':
            printf("%.1f*%.1f=%.1f",first,second,first*second);
            break;
        case '/':
            printf("%.1f/%.1f=%.1f",first,second,first/second);
            break;
        default:
            printf("Error! Operator is not correct!");
            break;
    }
}