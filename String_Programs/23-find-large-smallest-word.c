/* 20. Write a program in C to find the largest and smallest words in a string.

        Test Data :
        Input the string : It is a string with smallest and largest word.

        Expected Output :

        The largest word is 'smallest'
        and the smallest word is 'a'
        in the string : 'It is a string with smallest and largest word.'.    */


#include <stdio.h>
void main()
{
    char str[100], small[100], largest[100];
    int i = 0, j = 0, minlen = 100, maxlen = 0, wordlen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character ane reassing to null:
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }

    i = 0; // Reset index
    while (str[i] != '\0') {
        char word[100];
        j = 0;

        // Extract a word
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0'; // Null-terminate the word

        wordlen = j; // Get length of the word

        // Check for smallest word
        if (wordlen < minlen) {
            minlen = wordlen;
            int k;
            for (k = 0; k <= wordlen; k++) {
                small[k] = word[k];
            }
        }

        // Check for largest word
        if (wordlen > maxlen) {
            maxlen = wordlen;
            int k;
            for (k = 0; k <= wordlen; k++) {
                largest[k] = word[k];
            }
        }

        // Skip spaces
        while (str[i] == ' ') {
            i++;
        }
    }
    printf("Smallest word: %s\n", small);
    printf("Largest word: %s\n", largest);
}

