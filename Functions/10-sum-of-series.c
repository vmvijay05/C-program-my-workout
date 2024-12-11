/*5. Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.
        Expected Output :

        The sum of the series is : 34   */

// With Argument With Return
#include <stdio.h>
int sumofseries(int n)
{
    int i, sum = 0, fact = 1, j;
    for (i = 1; i <= n; i++)
    {
        do
        {
            fact = fact * i;
        } while (j <= i);
        sum = sum + fact / i;
    }
    return sum;
    
}
void main()
{
    int n, sum;
    printf("Enter the n value: ");
    scanf("%d", &n);
    sum = sumofseries(n);
    printf("The sum of the series: %d\n", sum);
}

/*Output:
Enter the n value: 4
The sum of the series: 10        */