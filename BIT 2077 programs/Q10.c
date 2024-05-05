//Double pointer

#include <stdio.h>


int main()
{
    int *ptr;
    int **dobl;

    int N = 0;
    printf("Enter N: \n");
    scanf("%d", &N);

    ptr = &N;
    printf("%d\n", *ptr);

    dobl = &ptr;
    printf("%d\n", **dobl);


    return 0;
}
