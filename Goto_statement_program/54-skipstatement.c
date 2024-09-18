// 54. Write a C program to skip the some statements in your program

#include <stdio.h>
void main() {
int i,n;
printf("Enter the number: ");
scanf("%d", &n);
for(i=1;i<=n;i++) {
if (i == 5) {
continue;
}
printf("%d\n", i);
 }
}
