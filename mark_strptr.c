#include <stdio.h>

struct Student
{
    int m1, m2, m3;
};

int main()
{
    struct Student s;
    struct Student *p;

    int total;
    float average;
    char grade;

    p = &s;

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &p->m1, &p->m2, &p->m3);

    total = p->m1 + p->m2 + p->m3;
    average = total / 3.0;

    if(average >= 90)
        grade = 'A';
    else if(average >= 75)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}