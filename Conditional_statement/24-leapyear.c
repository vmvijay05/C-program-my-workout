//24. Write a C program to find whether a given year is a leap year or not
#include<stdio.h>
    void main()
    {
        int year;
        printf("Enter the year: ");
        scanf("%d", &year);
        if(year%4==0)
        {
            printf("The given year is leap year");
        }
        else
        printf("%d year is not leap year:", year);
    }
