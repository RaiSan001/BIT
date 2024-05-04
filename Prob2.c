#include <stdio.h>

void write_numbers(int N);
void read_and_display_even();

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    write_numbers(N);
    printf("Even numbers from 1 to %d:\n", N);
    read_and_display_even();
    return 0;
}

void write_numbers(int N)
{
    FILE *file = fopen("num.txt", "w");
    if (file == NULL) {
        printf("Error\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
}


void read_and_display_even()
{
    FILE *file = fopen("num.txt", "r");
    if (file == NULL) {
        printf("Error\n");
        return;
    }
    int num;
    while (fscanf(file, "%d\n", &num) != EOF) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
    }
    fclose(file);
}
