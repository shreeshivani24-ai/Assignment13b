#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    p1 = str1;
    p2 = str2;

    while(*p1 == *p2 && *p1 != '\0')
    {
        p1++;
        p2++;
    }

    if(*p1 == *p2)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}