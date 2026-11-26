#include <stdio.h>

unsigned long long square(int n)
{
    return (unsigned long long)n * n;
}

unsigned long long cube(int n)
{
    return (unsigned long long)n * n * n;
}

unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, choice;

    unsigned long long (*ptr[3])(int) = {
        square, cube, factorial
    };

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    printf("\n1. Square");
    printf("\n2. Cube");
    printf("\n3. Factorial");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(n < 0 || n > 20 || choice < 1 || choice > 3)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Result = %llu\n", ptr[choice - 1](n));
    }

    return 0;
}