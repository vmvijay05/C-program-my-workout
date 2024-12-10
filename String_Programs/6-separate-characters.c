/*3. Write a program in C to separate individual characters from a string.

        Test Data :
        Input the string : w3resource.com

        Expected Output :

        The characters of the string are : w  3  r  e  s  o  u  r  c  e  .  c  o  m    */

#include <stdio.h>
void main()
{
    int i;
    char str[15];
    printf("Enter the string: ");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }
}

/*Output:
Enter the string: Vijayakumar.M
V i j a y a k u m a r . M      */