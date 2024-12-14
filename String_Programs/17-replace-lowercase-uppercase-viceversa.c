/*	15. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

        Test Data :
        Input the string : This Is A Test String.

        Expected Output :

        The given sentence is   : This Is A Test String.
        After Case changed the string  is: tHIS iS a tEST sTRING    */

#include <stdio.h>
void main()
{
    //     int a=74,i;
    //     char val='A',B='h';
    //    for(i=0;i<=1;i++)
    //    {
    //     printf("output=%d %c\n",a,a);
    //     printf("Output1=%d %c and %c %d\n",val,val,B,B);
    //     val=val+32;
    //    }

    char str[100], temp;
    int i, j, x = 0, y = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    // printf("ASCII Values: A=%d z=%d space=%d 0=%d null=%d\n",'A','z',' ','0','\0');

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("After Case changed the string  is: %s", str);
}

/*Output:

Enter a string: VijayKumaR
After Case changed the string  is: vIJAYkUMAr      */