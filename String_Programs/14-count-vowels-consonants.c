/*9. Write a program in C to count the total number of vowels or consonants in a string.

        Test Data :
        Input the string : Welcome to w3resource.com

        Expected Output :

        The total number of vowel in the string is : 9
        The total number of consonant in the string is : 12   */

#include <stdio.h>
int main()
{
    char str[100];
    int vowel_count=0,consonant_count=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
      {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vowel_count++;
        }
        else
        {
           // printf("The character is a consonant.\n");
           consonant_count++;
        }
      }
    }
    printf("The total number of vowel in the string is :%d\n",vowel_count);
    printf("The total number of consonant in the string is :%d\n",consonant_count);
}

/*Output:
Enter a string: VijayakumarM
The total number of vowel in the string is :5
The total number of consonant in the string is :7     */