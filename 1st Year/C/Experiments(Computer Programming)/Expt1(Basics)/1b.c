//To convert temperaturn from degrees centigrade to fahrenheit
#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the tempreature in celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2f Celcius=%.2f Fahrenheit",c,f);
}