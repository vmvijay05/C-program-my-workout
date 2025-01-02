// C Program to Store Information of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

struct Student
{
    char name;
    int roll_number;
    int age;
    float total_marks;
};

void main()
{
    struct Student students[5];
    int n = 5;

    students[0].roll_number = 1;
    students[0].name = "Vijay";
    students[0].age = 12;
    students[0].total_marks = 78.50;

    students[1].roll_number = 5;
    students[1].name = "Shyam";
    students[1].age = 10;
    students[1].total_marks = 56.84;

    students[2].roll_number = 2;
    students[2].name = "Bala";
    students[2].age = 11;
    students[2].total_marks = 87.94;

    students[3].roll_number = 4;
    students[3].name = "Dhilip";
    students[3].age = 12;
    students[3].total_marks = 89.78;

    students[4].roll_number = 3;
    students[4].name = "Srini";
    students[4].age = 13;
    students[4].total_marks = 78.55;
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %f\n", students[i].total_marks);
    }
}