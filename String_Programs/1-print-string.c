/*1. Write a program in C to input a string and print it.

		Test Data :
		Input the string : Welcome, w3resource
		
		Expected Output :
		
		The string you entered is : Welcome, w3resource   */



#include<stdio.h>
void main()
{
    char str_name[]="Welcome," " Vijayakumar";
    /* Various types of declaring a string:
    char str_name[16];
    str_name = "Vijayakumar";
    char str_name[16] = "Vijayakumar";
    char str_name[] = "Vijayakumar"; 
    char str_name[] = {'V','i','j','a','y','k','u','m','a','r'};
    */

    printf("The string you entered is: %s",str_name);


}


/*Output:
The string you entered is: Welcome, Vijayakumar  */