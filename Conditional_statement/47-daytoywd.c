// 47. Write a C program to convert specified days into years, weeks and days.Note: Ignore leap year.


#include<stdio.h>
void main()
{
    int num,year,day,week,remain;
    int number;

    printf("Enter the number: ");
    scanf("%d", &num);

year=num/366;
int intergerpart=(int)year;  //To find the whole digit 
printf("year: %d\n", intergerpart);

remain=num-(intergerpart*366);

week=remain/7;
int wholeweek=(int)week;
printf("week: %d\n", wholeweek);

remain=remain-(wholeweek*7);
printf("days: %d", remain);  
    
}
