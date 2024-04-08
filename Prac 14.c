/* prints
 *
 * *
 * * *
 * * * * upto n lines */

#include <stdio.h>


int main()
{
    int n = 0;
    printf("Enter n: \n");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

