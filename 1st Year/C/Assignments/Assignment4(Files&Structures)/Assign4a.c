//To print information of employees receiving salary more than Rs2,0000
#include<stdio.h>
void main()
{
    int n,check;
    struct employee
    {
        int id;
        char name[20], qualification[20];
        float salary;
    };
    printf("How many employees would you like to enter into the database? ");
    scanf("%d",&n);
    while(n<0)
    {
        printf("Invalid input! Re-enter the number of employees: ");
        scanf("%d",&n);
    }
    struct employee employer[n];
    printf("\n\nEnter the following data of the employees:\n");
    for(int i=0;i<n;i++)
    {
        printf("------------------------------------------\n");
        printf("Subject%d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&employer[i].id);
        check=employer[i].id;
        if(i>=1)
        {
            for(int j=0;j<i;j++)
            {
                if(employer[j].id==check)
                {
                    printf("Warning! Each employee has a unique Employee ID!\n");
                    printf("Please re-enter Employee ID: ");
                    scanf("%d",&employer[i].id);
                    check=employer[i].id;
                    j=-1;
                }
            }
        }
        printf("Employee's Name: ");
        gets(employer[i].name);
        gets(employer[i].name);
        printf("Qualification: ");
        gets(employer[i].qualification);
        printf("Salary: ");
        scanf("%f",&employer[i].salary);
    }
    printf("*************************************************************************\n");
    printf("Displaying employee details (Salary above Rs20,000)\n");
    printf("Sr.No.\t Employee ID\t Employee's Name\tQualification\t Salary\n");
    for(int i=0;i<n;i++)
    {
        if(employer[i].salary>20000)
        {
            printf("-------------------------------------------------------------------------\n");
            printf("%d\t",i+1);
            printf(" %d\t\t",employer[i].id);
            printf(" %s\t\t\t",employer[i].name);
            printf("%s\t\t",employer[i].qualification);
            printf(" %.2f\n",employer[i].salary);
        }
    }
    printf("-------------------------------------------------------------------------\n");
}