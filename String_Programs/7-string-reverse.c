/*4. Write a program in C to print individual characters of a string in reverse order.
	
		Test Data :
		Input the string : w3resource.com
		
		Expected Output :
		
		The characters of the string in reverse are :
		m  o  c  .  e  c  r  u  o  s  e  r  3  w        */

#include <stdio.h>
void main()
{
    int i;
    char str[5];
    printf("Enter the string: ");
    scanf("%s", &str);

      for (i = str[5]+1; i<=0; i--)
    {
        printf("%c ", str[i]);
    }
}

