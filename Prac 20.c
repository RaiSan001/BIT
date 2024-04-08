// fibonacci series (first n terms only) using recursion

#include <stdio.h>

int fibnoc(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n ==1)
    {
        return 1;
    }
    else
    {
        return (fibnoc(n-1) + fibnoc(n-2));
    }
}

int main ()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The elements of Fibonacci series are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibnoc(i));
    }
    printf("\n");
    return 0;
}
