//C program to find area of circle
#include<stdio.h>
#define pi 3.14
int main()
{
    float area, r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle is %.2f sq units.",area);
    return 0;
}