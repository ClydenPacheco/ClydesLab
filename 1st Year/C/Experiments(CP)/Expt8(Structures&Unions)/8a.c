//To implement structures
#include<stdio.h>
void main()
{
    struct classroom
    {
        int roll;
        char name[50];
        float m1,m2,m3,avg,t;
    };
    int n,i,c,mx;
    printf("How many students would you like to enter into the database? ");
    scanf("%d",&n);
    if(n<0)
    n*=-1;
    struct classroom student[n];
    printf("What are the maximum marks that can be obtained per subject? ");
    scanf("%d",&mx);
    if(mx<0)
    mx*=-1;
    printf("\n\nEnter the following data:\n");
    printf("**************************************************************\n");
    for(i=0;i<n;i++)
    {
        printf("Sr. No. %d\n",i+1);
        printf("Roll number: ");
        scanf("%d",&student[i].roll);
        c=student[i].roll;
        if(i>0)
        {
            for(int j=0;j<i;j++)
            {
                if(c==student[j].roll)
                {
                    printf("Warning! This roll number has already been entered!\n");
                    printf("Re-enter the roll number: ");
                    scanf("%d",&student[i].roll);
                    c=student[i].roll;
                    j=-1;
                }
            }
        }
        printf("Name of student: ");
        gets(student[i].name);
        gets(student[i].name);
        printf("--------------------------------------------------------------\n");
        printf("Enter the marks obtained in the following subjects(out of %d):\n",mx);
        printf("Programming: ");
        scanf("%f",&student[i].m1);
        while(student[i].m1>mx||student[i].m1<0)
        {
            if(student[i].m1>mx)
            printf("Marks exceed the upper limit!\n");
            else
            printf("Marks exceed the lower limit!\n");
            printf("Please re-enter the marks in Programming: ");
            scanf("%f",&student[i].m1);
        }
        printf("Mathematics: ");
        scanf("%f",&student[i].m2);
        while(student[i].m2>mx||student[i].m2<0)
        {
            if(student[i].m2>mx)
            printf("Marks exceed the upper limit!\n");
            else
            printf("Marks exceed the lower limit!\n");
            printf("Please re-enter the marks in Mathematics: ");
            scanf("%f",&student[i].m2);
        }
        printf("Physics: ");
        scanf("%f",&student[i].m3);
        while(student[i].m3>mx||student[i].m3<0)
        {
            if(student[i].m3>mx)
            printf("Marks exceed the upper limit!\n");
            else
            printf("Marks exceed the lower limit!\n");
            printf("Please re-enter the marks in Physics: ");
            scanf("%f",&student[i].m3);
        }
        printf("--------------------------------------------------------------\n");
        printf("**************************************************************\n");
    }
    printf("\nThe total marks and average marks are as given below:\n");
    printf("Sr.No. Roll No.       Name                       Marks                  Total    Average\n");
    printf("                                 Programming  Mathematics  Physics\n");
    for(i=0;i<n;i++)
    {
        printf("----------------------------------------------------------------------------------------\n");
        printf("%d ",i+1);
        printf("     %d ",student[i].roll);
        printf("\t %s ",student[i].name);
        printf("\t\t %.2f ",student[i].m1);
        printf("\t      %.2f ",student[i].m2);
        printf("\t   %.2f ",student[i].m3);
        student[i].t=student[i].m1+student[i].m2+student[i].m3;
        student[i].avg=student[i].t/3;
        printf("\t%.2f ",student[i].t);
        printf("\t %.2f\n",student[i].avg);
    }
    printf("----------------------------------------------------------------------------------------\n");
}