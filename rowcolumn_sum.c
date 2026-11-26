#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int sum;
    int *p;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0];

    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
        {
            sum += *(p + i * c + j);
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
        {
            sum += *(p + i * c + j);
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}