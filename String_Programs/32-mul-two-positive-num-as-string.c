/*  37. Write a C program to multiply two positive numbers as strings. Return a string representation of the product.

        Expected Output:

        Original numbers: 100 and 15
        Multiple two said numbers represent as string? 1500  */

#include <stdio.h>
void main()
{
    char str_name[15], str2[100], output[100];
    int string_result = 0, value1 = 0, value2 = 0, i, temp = 0, digit = 0, j;
    printf("Enter the number as string: ");
    scanf("%s", &str_name);
    // fgets(str_name, sizeof(str_name), stdin);
    printf("Enter the number as string: ");
    scanf("%s", &str2);
    // fgets(str2, sizeof(str2), stdin);

    while (str_name[i] != '\0')
    {
        value1 = value1 * 10 + (str_name[i] - '0');
        i++;
    }
    printf("value1=%d\n", value1);
    while (str2[j] != '\0')
    {
        value2 = value2 * 10 + (str2[j] - '0');
        j++;
    }
    printf("value2=%d\n", value2);
    string_result = value1 * value2;
    printf("result=%d\n", string_result);

    // Count the number of digits in the number
    temp = string_result;
    while (temp > 0)
    {
        digit++;
        temp /= 10;
    }
    printf("digit=%d\n", digit);

    for (i = digit - 1; i >= 0; i--)
    {
        output[i] = (string_result % 10) + '0'; // Get the last digit and convert to character
        printf("%d\n", string_result % 10);
        string_result /= 10; // Remove the last digit
    }
    output[digit] = '\0';
    printf("String representation: %s\n", output);
}
