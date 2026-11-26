#include <stdio.h>

int length(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] != '\0')
        i++;

    printf("Length of string = %d\n", i);

    return 0;
}

int copy(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';

    printf("Copied string = %s\n", s2);

    return 0;
}

int compare(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;

    if(s1[i] == s2[i])
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

int main()
{
    char str1[100], str2[100];
    int choice;

    int (*ptr[3])(char[], char[]) = {
        length, copy, compare
    };

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    printf("\n1. Find length");
    printf("\n2. Copy string");
    printf("\n3. Compare strings");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3)
        ptr[choice - 1](str1, str2);
    else
        printf("Invalid choice\n");

    return 0;
}