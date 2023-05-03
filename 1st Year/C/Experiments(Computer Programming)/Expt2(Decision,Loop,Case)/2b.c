//To print prime numbers from 1 to 100 using while loop
#include<stdio.h>
void main()
{
    int i,number=1,count;
    printf("The prime numbers from 0 to 100 are:\n");
    while(number<=100)
    {
        count=0;
        i=2;
        while(i<=number/2)
        {
            if(number%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0&&number!=1)
        {
            printf("%d\n",number);
        }
        number++;
    }
}