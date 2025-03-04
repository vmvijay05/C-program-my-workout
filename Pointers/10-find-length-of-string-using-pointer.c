/*	10. Write a program in C to calculate the length of a string using a pointer.
		Test Data :
		Input a string : w3resource
		Expected Output :
		The length of the given string w3resource                                                                     
		is : 10    */

#include <stdio.h>
int main()
 {
    char str[100];
    char *ptr;
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    
    ptr = str;

//printf("pointer value=%uand%d\n",ptr,*ptr);
    while (*ptr != '\0')
     {
        //printf("pointer value=%p\n",ptr);
        length++;
        ptr++;
    }
    printf("The length of the string is: %d\n", length);
}

/*Output:

Enter a string: Vijay
The length of the string is: 5   */




