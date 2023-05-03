//To delete an element in an array
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=0,j,num,a[20],pos,o,n;
    printf("How many elements would you wish to enter? ");
    scanf("%d",&num);
    printf("Enter the elements into the array:\n");
    for(i=0;i<num;i++)
    {
        printf("[%d] ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The given array is:\n");
    for(i=0;i<num;i++)
    {
        printf("[%d] %d\n",i+1,a[i]);
    }
    do
    {
        system("pause");
        system("cls");
        printf("Enter the option corresponding to the available options:\n");
        printf("1 to delete an element in a certain position\n");
        printf("2 to delete a particular element\n");
        printf("3 to display the array\n");
        printf("4 to Exit\n");
        scanf("%d",&o);
        switch(o)
        {
            case 1:
            {
                printf("Enter the position of the element you wish to delete: ");
                scanf("%d",&pos);
                pos-=1;
                if(pos<0||pos>num-1)
                {
                    printf("Slot doesn't exist!\n");
                    break;
                }
                for(i=pos;i<num;i++)
                {
                    a[i]=a[i+1];
                }
                num-=1;
                break;
            }
            case 2:
            {
                printf("Enter the element you wish to delete: ");
                scanf("%d",&n);
                for(i=0;i<num;i++)
                {
                    if(a[i]==n)
                    {
                        j=i;
                        for(i=j;i<num;i++)
                        {
                            a[i]=a[i+1];
                        }
                        num-=1;
                        break;
                    }
                }
                if(i==num)
                printf("Element not found!\n");
                break;
            }
            case 3:
            {
                if(i==0)
                {
                    printf("The array is currently empty!\n");
                    break;
                }
                printf("The new array is:\n");
                for(i=0;i<num;i++)
                {
                    printf("[%d] %d\n",i+1,a[i]);
                }
                break;
            }
            case 4: break;
            default:
            {
                printf("Error! Wrong input!\n");
                break;
            }
        }
    } while (o!=4);
}