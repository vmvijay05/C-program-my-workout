/*  13. Write a program in C to count the number of vowels and consonants in a string using a pointer.
        Test Data :
        Input a string: string
        Expected Output :

        Number of vowels : 1
        Number of constant : 5  */

#include <stdio.h>
int main()
{
    char str[100];
    char *ptr = str;
    int vowel_count = 0, consonant_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr != '\0')
    {
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
        {
            if (*ptr == 'a' || *ptr == 'A' || *ptr == 'e' || *ptr == 'E' || *ptr == 'i' || *ptr == 'I' || *ptr == 'o' || *ptr == 'O' || *ptr == 'u' || *ptr == 'U')
            {
                vowel_count++;
            }
            else
            {
                // printf("The character is a consonant.\n");
                consonant_count++;
            }
        }
        ptr++;
    }
    printf("The total number of vowel in the string is :%d\n", vowel_count);
    printf("The total number of consonant in the string is :%d\n", consonant_count);
}

/*Output:

Enter a string: pointer program
The total number of vowel in the string is :5
The total number of consonant in the string is :9  */
