/* 38. Write a C program to reverse all the vowels present in a given string. Return the newly created string.

        Test Data :
        Input a string: “AEIou”

        Expected Output:

        Input a string: Check bracket in the said string is valid or not? “uoIEA”   */

#include <stdio.h>
void main()
{
    char str[100], vowel[100], temp;
    int i, j, vowel_count = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel[vowel_count++] = str[i]; // Store the vowel.
        }
    }

    // Reverse the vowels array
    for (i = 0, j = vowel_count - 1; i < j; i++, j--)
    {
        // move the string vowels to the vowel array.
        temp = vowel[i];
        vowel[i] = vowel[j];
        vowel[j] = temp;
    }

    vowel_count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        // Check if the current character is a vowel
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            // Replace the vowel in the main string
            str[i] = vowel[vowel_count++];
        }
    }
    printf("Final string: %s", str);
}

/*Output:
Enter the string: Vijaykumar
Final string: Vajuykamir             */