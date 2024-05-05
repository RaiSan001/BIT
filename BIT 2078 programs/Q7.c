//Write a program to create a file "duplicate" that contains the exact copy of file "original".

#include <stdio.h>


int main()
{
    FILE *original = fopen("num1.txt", "r");
    FILE *duplicate = fopen("num2.txt", "w");
    char buffer[100];

    if (original == NULL)
    {
        printf("Error\n");
        return 1;
    }

    if (duplicate == NULL)
    {
        printf("Error\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), original) != NULL)
    {
        fputs(buffer, duplicate);
    }

    return 0;
}
