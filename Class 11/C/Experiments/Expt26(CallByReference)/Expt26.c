//To find the area and perimeter and area of a circle using call by reference
#include<stdio.h>
#define pi 3.14
void fun(float,float*,float*);
int main()
{
    float rad,ar=1,pr=1;
    printf("Enter the radius of the circle: ");
    scanf("%f",&rad);
    fun(rad,&ar,&pr);
    printf("The area of the circle is %.2f and the perimenter is %.2f.",ar,pr);
    return 0;
}
void fun(float r, float *a,float *p)
{
    *a=pi*r*r;
    *p=2*pi*r;
}