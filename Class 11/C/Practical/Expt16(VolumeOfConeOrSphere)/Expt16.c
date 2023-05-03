//C Program to find the volume of sphere or cone
#include<stdio.h>
#define p 3.14
int main()
{
    int c;
    float h,r,v;
    do
    {
        printf("Select a corresponding number:\n");
        printf("1. To find the volume of a Sphere\n");
        printf("2. To find the voulme of a Cone\n");
        printf("3. To Exit\n");
        printf("Choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("Enter the radius of the sphere: ");
                scanf("%f",&r);
                v=(4*p*r*r*r)/3;
                printf("The volume of the sphere is %.2f cube units\n",v);
                break;
            }
            case 2:
            {
                printf("Enter the radius of the cone: ");
                scanf("%f",&r);
                printf("Enter the height of the cone: ");
                scanf("%f",&h);
                v=(p*r*r*h)/3;
                printf("The volume of the code is %.2f cube units\n",v);
                break;
            }
            case 3: break;
            default:
            {
                printf("Wrong Input! Please re-enter!\n");
                break;
            }
        }
    }while(c!=3);
    return 0;
}