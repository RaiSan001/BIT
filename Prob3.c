#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int *ptr;
    int lar, sma;

    printf("Enter N: \n");
    scanf("%d", &N);

    ptr = malloc(N * sizeof(int ));
    if (ptr == NULL)
    {
        printf("Failed.\n");
        return 1;
    }

    for (int i = 0; i < N; ++i)
    {
        printf("Enter number: ");
        scanf("%d", &ptr[i]);
    }

    lar = sma = ptr[0];

    for (int j = 0; j < N; ++j)
    {
        if (ptr[j] > lar)
        {
            lar = ptr[j];
        }
        if (ptr[j] < sma)
        {
            sma = ptr[j];
        }
    }

    printf("Largest = %d\n", lar);
    printf("Smallest = %d", sma);

    free(ptr);

    return 0;
}
