/*3. Write a program in C to swap two numbers using a function.
        Test Data :
        Input 1st number : 2
        Input 2nd number : 4
        Expected Output :

        Before swapping: n1 = 2, n2 = 4
        After swapping: n1 = 4, n2 = 2    */

// With Argument Without Return
#include <stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
    printf("After swaping: n1=%d, n2=%d\n", x, y);
}

void main()
{
    int x, y;
    printf("Enter the two numbers: ");
    scanf("%d%d", &x, &y);
    printf("Before swaping: n1=%d, n2=%d\n", x, y);
    swap(x, y);
}

/*Output:
Enter the two numbers: 65
67
Before swaping: n1=65, n2=67
After swaping: n1=67, n2=65       */
