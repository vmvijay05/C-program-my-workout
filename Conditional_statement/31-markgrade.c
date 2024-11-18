/* 31. Write a C program to read the roll no, marks of three subjects and calculate the total, percentage and division
Test Data :
		Input the Roll Number of the student :784
		Input the marks:
		Physics: 70
		Chemistry: 80
	    Computer Application: 90 */
#include<stdio.h>
void main()
{
    int roll;
    float phy, che, ca, total, p;
    printf("Enter the roll number of the candidate: \n");
    scanf("%d",&roll);
    printf("Input the marks:\n");
    printf("Enter the mark of the physics: \n ");
    scanf("%f", &phy);
     printf("Enter the mark of the chemistry: \n");
    scanf("%f", &che);
     printf("Enter the mark of the computer application: \n");
    scanf("%f", &ca);
total=phy+che+ca;
printf("The total mark is: %f \n", total);
p=(total/300)*100;
printf("The percentage is: %f \n",p);
if(p>=95)
printf("First class");
else if(p>=75)
printf("Second class");
else if(p>=35)
printf("Pass");
else
printf("Fail");



}
