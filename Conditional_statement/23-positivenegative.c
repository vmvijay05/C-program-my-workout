//23. Write a C program to check whether a given number is positive or negative
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>=0) {
            printf("The given number is positive number.");
    } 
    else
        printf("The given number is negative number");
}
