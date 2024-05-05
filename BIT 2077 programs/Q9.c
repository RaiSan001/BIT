//Write a C program to check whether a given string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    printf("Enter string: \n");
    scanf("%s", str);

    int len = strlen(str);
    int j = len - 1;


    for (int i = 0; i < len; i++)
    {
        rev[j] = str[i];
        j--;
    }
    rev[len] - '\0';

    if (strcmp(str, rev) == 0)
    {
        printf("Palindrome\n");
    } else
    {
        printf("Not palindrome\n");
    }

    return 0;
}
