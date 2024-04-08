// make 3x3 matrices and perform addition and multiplication

#include <stdio.h>

#define SIZE 3

void read_matrix(int matrix[SIZE][SIZE]);
void print_matrix(int matrix[SIZE][SIZE]);
void matrix_sum(int mat_A[SIZE][SIZE], int mat_B[SIZE][SIZE], int sum[SIZE][SIZE]);
void matrix_product(int mat_A[SIZE][SIZE], int mat_B[SIZE][SIZE], int product[SIZE][SIZE]);

int main()
{
    int mat_A[SIZE][SIZE], mat_B[SIZE][SIZE], product[SIZE][SIZE], sum[SIZE][SIZE];

    printf("Enter elements of first matrix : \n");
    read_matrix(mat_A);

    printf("Enter elements of second matrix : \n");
    read_matrix(mat_B);

    matrix_sum(mat_A, mat_B, sum);
    printf("Sum of Matrices \n");
    print_matrix(sum);

    matrix_product(mat_A, mat_B, product);
    printf("Product of Matrices \n");
    print_matrix(product);

    return 0;
}

void read_matrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
         for (int j = 0; j < SIZE; j++)
        {
          scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix_sum(int mat_A[SIZE][SIZE], int mat_B[SIZE][SIZE], int sum[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            sum[i][j] = mat_A[i][j] + mat_B[i][j];
        }


    }

}

void matrix_product(int mat_A[SIZE][SIZE], int mat_B[SIZE][SIZE], int product[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                product[i][j] += mat_A[i][k] * mat_B[k][j];
            }
        }
    }
}
