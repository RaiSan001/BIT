#include <stdio.h>
#include <stdlib.h>

void addMatrices(int **firstMatrix, int **secondMatrix, int **result, int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void printMatrix(int **matrix, int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int **firstMatrix = (int **)malloc(m * sizeof(int *));
    int **secondMatrix = (int **)malloc(m * sizeof(int *));
    int **sum = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) 
    {
        firstMatrix[i] = (int *)malloc(n * sizeof(int));
        secondMatrix[i] = (int *)malloc(n * sizeof(int));
        sum[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    
    addMatrices(firstMatrix, secondMatrix, sum, m, n);
    
    printf("Sum of the two matrices is:\n");
    printMatrix(sum, m, n);

   
    for (int i = 0; i < m; i++) 
    {
        free(firstMatrix[i]);
        free(secondMatrix[i]);
        free(sum[i]);
    }
    free(firstMatrix);
    free(secondMatrix);
    free(sum);

    return 0;
}
