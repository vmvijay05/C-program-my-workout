/*  22. Write a program in C to print a string in reverse using a pointer.
		Test Data :
		Input a string : w3resource
		Expected Output :
		ecruoser3w   */

#include <stdio.h>
#include <string.h>
void main()
{
  int i, length;
  char string[100];
  char *ptr=string;
  printf("Enter the string: ");
  scanf("%s", &string);
  length = strlen(string);
  for(i=0;i<length;i++)
  {
      ptr=&string[i];
  }
  for (i = length-1; i >= 0; i--)
  {
    printf("%c ", *ptr);
    ptr--;
  }
}

/*Output:

Enter the string: LordMurugan
n a g u r u M d r o L  */