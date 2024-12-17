/*30. Write a program in C to check whether a character is a digit or not.
		
		Test Data :
		Input a character : 8
		
		Expected Output :
		
		The entered character is a digit.    */

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is alphabet\n", ch);
    }
    else if ((ch >= '0' && ch<= '9'))
    {
        printf("%c is digit\n", ch);
    }
    else
        printf("Enter valid input.");
}
