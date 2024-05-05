//program showing break and continue statements

#include <stdio.h>


int main()
{
    int N, sqr = 0;
    printf("Enter N: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        if (i == 5)
        {
            continue;
        }
        if (i > 10)
        {
            break;
        }
        sqr = sqr + (i * i);
    }

    printf("Sum of squares except 5 and upto n (n<10) is : %d\n", sqr);
    return 0;
}
