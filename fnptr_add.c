#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, result;
    int (*ptr)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr = add;

    result = ptr(a, b);

    printf("Sum = %d\n", result);

    return 0;
}