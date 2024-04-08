// prints Prac 14 in a pyramid form upto n lines //

#include <stdio.h>


int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        for (int space = n - 1; space > i; space--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

