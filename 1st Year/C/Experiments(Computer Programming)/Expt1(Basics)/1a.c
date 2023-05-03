//To find the area and circumference of a circle
#include<stdio.h>
#define PI 3.14
void main()
{
    float radius, area, circum;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2*PI*radius;
    printf("Area of the circle is %.2f and circumference of the circle is %.2f\n",area,circum);
}