/*21. Write a program in C to print all the alphabets using a pointer.

        Expected Output :
        The Alphabets are :
        A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z */

#include <stdio.h>
void main()
{
    char alpha[100];
    char *ptr = alpha;

    for (int i = 0; i < 26; i++)
    {
        alpha[i] = 'A' + i;
        // printf("value=%c\n",alpha[i]);
    }
    printf("The Alphabets are:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *(ptr + i));
    }
}

/*Output:

The Alphabets are:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z   */