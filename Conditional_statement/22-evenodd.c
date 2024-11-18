 //22. Write a C program to check whether a given number is even or odd
#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("The given value is even");
    else
        printf("The given value is odd");
    }
