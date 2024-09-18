/*86. Write a C program to find the how many digits from given number . */

#include <stdio.h>
void main()
{
  int i, n1, n, given;
  printf("Enter the number: ");
  scanf("%d", &n);
  given = n;
  while (given != 0)
  {
    given = given / 10;
    //  int integerpart = (int)n1;
    // n = integerpart;
    i++;
  }
  printf("The count is: %d\n", i);
}

/*Output:
Enter the number: 65432
The count is: 5   */