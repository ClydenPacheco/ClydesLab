//C Program to insert or delete an element into an array
#include<stdio.h>
int main()
{
    int s,i,choice,pos,n;
    printf("How many elements would you like to enter into the array? ");
    scanf("%d",&n);
    int a[100];
    printf("Enter the elements into the array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The given array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] %d\n",i+1,a[i]);
    }
    do
    {
        printf("Enter the number corresponding to the number:\n");
        printf("1. To insert an element in a certain position\n");
        printf("2. To delete a particular element\n");
        printf("3. To delete an element in a particuar position\n");
        printf("4. To display contents of the array\n");
        printf("5. To exit\n");
        printf("Choice: ");
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            {
                printf("Enter the position in which the new element has to be inserted: ");
                scanf("%d",&pos);
                pos-=1;
                while(pos>=n || pos<0)
                {
                    printf("Invalid input! Re-enter position: ");
                    scanf("%d",&pos);
                    pos-=1;
                }
                n+=1;
                for(i=n-1;i>=pos;i--)
                {
                    a[i+1]=a[i];
                }
                printf("Enter the element: ");
                scanf("%d",&choice);
                a[pos]=choice;
                break;
            }
            case 2:
            {
                printf("Enter the element you wish to delete: ");
                scanf("%d",&choice);
                for(i=0;i<n;i++)
                {
                    if(a[i]==choice)
                    {
                        for(int j=i;j<n;j++)
                        {
                            a[i]=a[i+1];
                        }
                        n-=1;
                        break;
                    }
                }
                if(i==n )
                {
                    printf("Element doesn't exist!\n");
                }
                break;
            }
            case 3:
            {
                printf("Enter the position of the element you wish to delete: ");
                scanf("%d",&pos);
                pos-=1;
                while(pos>=n || pos<0)
                {
                    printf("Invalid input! Re-enter position: ");
                    scanf("%d",&pos);
                    pos-=1;
                }
                for(i=pos;i<n;i++)
                {
                    a[i]=a[i+1];
                }
                n-=1;
                break;
            }
            case 4:
            {
                printf("Display:\n");
                for(i=0;i<n;i++)
                {
                    printf("[%d] %d\n",i+1,a[i]);
                }
                break;
            }
            case 5: break;
            default:
            {
                printf("Wrong input! please re-enter!\n");
                break;
            }
        }
    }while(s!=5);
}