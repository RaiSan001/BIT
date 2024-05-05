//Write a program to find the sum of diagonal elements of n × n matrix.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter n: \n");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of matrix: \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int k = 0; k < n; ++k)
    {
        sum = sum + mat[k][k];
    }

    printf("Sum: %d", sum);
    
    return 0;
}
