//Write a program to convert a given string to lowercase without using any library functions.

#include <stdio.h>


int main()
{
    char str[20];
    printf("Enter string: \n");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    printf("In lower: %s", &str);
    return 0;
}
