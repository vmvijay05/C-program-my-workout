/*22. Write a program in C to convert a string to lowercase.
	
		Test Data :
		Input a string in UPPERCASE : THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
		
		Expected Output :
		
		Here is the above string in lowercase :                              
		the quick brown fox jumps over the lazy dog.    */
#include<stdio.h>
#include<string.h>
void main()
{
         char str[100], temp;
    int i, j, x = 0, y = 0;
    printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
    // printf("ASCII Values: A=%d z=%d space=%d 0=%d null=%d\n",'A','z',' ','0','\0');

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("After Case changed the string  is: %s", str);
}

/*Output:

Enter a string: LEARN C PROGRAMMING WITH STRING
After Case changed the string  is: learn c programming with string          */