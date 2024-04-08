//displays prime no upto 100

#include <stdio.h>
#include <stdbool.h>

bool prime (int num);

int main()
{


    for (int i = 2; i <= 100; i++)
    {
        if (prime(i) == true)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}

bool prime (int num)
{
    int j = 2;
    while (j < num)
    {
        if (num % j == 0)
        {
            return false;
        }
        j++;
    }
}
