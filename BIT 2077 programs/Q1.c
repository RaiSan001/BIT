//Write a program to find factorial of 'n' using recursive function.

#include <stdio.h>

int do_factorial(int N);

int main ()
{
    int N = 0;
    printf("Enter N: \n");
    scanf("%d", &N);

    int factorial = do_factorial(N);
    printf("%d", factorial);

    return 0;
}

int do_factorial(int N)
{
    if (N <= 1)
    {
        return 1;
    }

    return N * do_factorial(N-1);

}
