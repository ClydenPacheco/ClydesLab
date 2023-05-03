//To find average marks on n students
#include<stdio.h>
float average(float mk[50],int n1)
{
    float s=0;
    for(int j=0;j<n1;j++)
    {
        s+=mk[j];
    }
    s/=n1;
    return s;
}
void main()
{
    int i,n;
    float mks[50];
    printf("The marks of how many students would you like to enter? ");
    scanf("%d",&n);
    printf("Enter the students' marks:\n");
    printf("Sr.No.                    Marks\n");
    for(i=0;i<n;i++)
    {
        printf("Student%d                    ",i+1);
        scanf("%f",&mks[i]);
    }
    printf("The entered data:\n");
    printf("Sr.No.                    Marks\n");
    for(i=0;i<n;i++)
    {
        printf("Student%d                  %.2f\n",i+1,mks[i]);
    }
    printf("The average marks are: %.2f",average(mks,n));
}