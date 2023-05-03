//To use switch case
#include<stdio.h>
#define p 3.14
void main()
{
    float a,c,r;
    int o;
    printf("Enter the number correspondinf to the operation:\n");
    printf("0 to calculate area of circle\n");
    printf("1 to calculate circumference of circle\n");
    scanf("%d",&o);
    while(o!=0&&o!=1)
    {
        printf("Error! Enter 0 or 1!\n");
        scanf("%d",&o);
    }
    switch(o)
    {
        case 0:
        {
            printf("Enter the radius of the circle: ");
            scanf("%f",&r);
            a=p*r*r;
            printf("Area of the circule is %.2f sq units",a);
            break;
        }
        case 1:
        {
            printf("Enter the radius of the circle: ");
            scanf("%f",&r);
            c=2*p*r;
            printf("Circumference of the circule is %.2f units",c);
            break;
        }
    }
}