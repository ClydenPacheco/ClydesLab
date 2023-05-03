//C program to convert degrees celcius to degreeds fanrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in degrees celcius: ");
    scanf("%f",&c);
    f=((c*5)/9)+32;
    printf("%.2f celcius = %.2f farenheit",c,f);
    return 0;
}