//Calculte gross salary
#include<stdio.h>
int main()
{
    float hra,da,bs,gs;
    printf("Enter bass salary: ");
    scanf("%f",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    gs=bs+da+hra;
    printf("Your basic salary is: %.2f\n",gs);
    return 0;
}