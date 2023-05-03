//To convert temperature from degrees celcius to farenheite
#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in degrees celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2f Degrees Celcius = %.2f Farenheite",c,f);
}