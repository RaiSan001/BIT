//Write a program to check whether a given integer is palindrome or not.

#include <stdio.h>


int main()
{
    int N = 0;
    printf("Enter integer: \n");
    scanf("%d", &N);
    int temp = 0;
    int original_num = N;

    while (N != 0)
    {
        temp = (10 * temp) + (N % 10);
        N = N/10;
    }

    if (temp == original_num)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
