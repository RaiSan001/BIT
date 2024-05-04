#include <stdio.h>

void merge(FILE* file1, FILE* file2, FILE* file3);

int main()
{
    FILE *file1 = fopen("num1.txt", "r");
    FILE *file2 = fopen("num2.txt", "r");
    FILE *file3 = fopen("file3.txt", "w");

    if(file1 == NULL || file2 == NULL || file3 == NULL)
    {
        printf("Error\n");
        return 1;
    }

    merge(file1, file2, file3);

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}

void merge(FILE* file1, FILE* file2, FILE* file3)
{
    int numbers[100];
    int count = 0;
    int num;

    while (fscanf(file1, "%d\n", &num) != EOF)
    {
        numbers[count++] = num;
    }

    while (fscanf(file2, "%d\n", &num) != EOF)
    {
        numbers[count++] = num;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }

        }
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file3, "%d\n", numbers[i]);
    }
    printf("Successfully merged and sorted");
}
