//program to compare 3 numbers

#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("What's a? \n");
    scanf("%d", &a);
    printf("What's b? \n");
    scanf("%d", &b);
    printf("What's c? \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is the largest");
    }
    else if (b > a && b > c)
    {
        printf("b is the largest");
    }
    else if (c > a && c > b)
    {
        printf("c is the largest");
    }
    else
    {
        printf("all are equal");
    }


    return 0;
}
