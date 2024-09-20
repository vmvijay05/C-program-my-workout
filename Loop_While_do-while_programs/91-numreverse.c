/* 91. Write a program in C to display the number in reverse order. 
		Test Data :
		Input a number: 12345
		Expected Output :
		The number in reverse order is : 54321   */

#include<stdio.h>
void main()
{

    int num,given,i;

    printf("Input a number: ");
    scanf("%d", &num);

given=num;
    while(given!=0)
    {
        i=given%10;
        printf("%d",i);
        given=given/10;
    }

}


/*Output: 

Input a number: 1076
6701     */


