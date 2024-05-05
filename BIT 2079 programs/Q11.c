/* Write a program to display the following pattern using the string "NEPAL".

N
NE
NEP
NEPA
NEPAL */

#include <stdio.h>

int main()
{
    char str[] = "NEPAL";
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
