/* 40. Write a C program to read any day number in integer and display the day name in word format*/


#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n==1){
        printf("Day: Sunday");
    }
    else if(n==2){
        printf("Day: Monday");
    }
    else if(n==3){
        printf("Day: Tuesday");
    }
    else if(n==4){
        printf("Day: Wednesday");
    }
    else if(n==5){
        printf("Day: Thursday");
    }
    else if(n==6){
        printf("Day: Friday");
    }
    else if(n==7){
    printf("Day: Saturday");
    }
else
printf("Undefined");
}
