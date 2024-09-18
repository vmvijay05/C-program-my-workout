//43. Write a program in C to read any Month Number in integer and display the number of days for this month

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    printf("The Month have 31 days");
    else if(n==4 || n==6 || n==9 || n==11)
    printf("The month have 30 days");
    else if(n==2)
    printf("The month have 28 days");
    else
    printf("Invalid number");

}
