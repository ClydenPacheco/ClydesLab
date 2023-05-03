//To find area and circumference of circle
#include<stdio.h>
#define p 3.14
void main()
{
    float a,c,r;
    printf("Enter the ratius of the circle: ");
    scanf("%f",&r);
    a=p*r*r;
    c=2*p*r;
    printf("The area of the circle is %.2f squnits anf the circumfernece is %.2f units",a,c);
}