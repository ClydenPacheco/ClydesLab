//C Program to calculate the total marks, percentage and calss of student
#include<stdio.h>
int main()
{
    float p,t,eng,port,phy,chem,maths,cs;
    printf("Enter the marks in: Mathematics ");
    scanf("%f",&maths);
    printf("Enter the marks in: Computer Science ");
    scanf("%f",&cs);
    printf("Enter the marks in: Physics ");
    scanf("%f",&phy);
    printf("Enter the marks in: Chemistry ");
    scanf("%f",&chem);
    printf("Enter the marks in: English ");
    scanf("%f",&eng);
    printf("Enter the marks in: Portuguese ");
    scanf("%f",&port);
    t=maths+cs+eng+port+phy+chem;
    p=t/600*100;
    printf("The total marks are: %.2f\n",t);
    printf("The percentage is %.2f\n",p);
    if(p>=75)
    printf("Congratulations! You have attained Distinction!\n");
    else if(p>=60&&p<75)
    printf("Congratulations! You have attained 1st Calss!\n");
    else if(p>=50&&p<60)
    printf("Congratulations! You have attained 2st Calss!\n");
    else if(p>=40&&p<50)
    printf("Congratulations! You have attained 3st Calss!\n");
    else
    printf("You have failed :(\n");
    return 0;
} 