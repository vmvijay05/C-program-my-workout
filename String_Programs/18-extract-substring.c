/*13. Write a program in C to extract a substring from a given string.

        Test Data :
        Input the string : this is test string
        Input the position to start extraction :9
        Input the length of substring :4

        Expected Output :
        The substring retrieve from the string is : " test "   */

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], copystring[100], charlength;
    int num, length = 0, i, j, k,m;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    charlength = strlen(str);
    printf("length=%d\n",charlength);

    printf("Input the index to start extraction: \n");
    scanf("%d", &num);

    printf("Enter the input length of substring: \n");
    scanf("%d", &length);

    if (num < charlength && length  < (charlength-num))
    {
        k = num;
        for (i = 0; i < length; i++)
        {
            copystring[i] = str[k];
            k++;
        }
        copystring[i]='\0'; //add null value for last index.
    }
    
    printf("The copied string is: %s\n", copystring);
}

/*Output:

Enter a string: C Programming Language
length=23
Input the index to start extraction:
3
Enter the input length of substring:
7
The copied string is: rogramm           */
