//is it armstrong

#include <stdio.h>
#include <math.h>


int main()
{
    int num, sum, count = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    int tmp = num;

    while (tmp > 0)
    {
        tmp = tmp / 10;
        ++count;
    }

    tmp = num;
    while (tmp > 0)
    {
        int rem = tmp % 10;
        sum = sum + pow(rem, count);
        tmp = tmp / 10;
    }


    if (num == sum)
    {
        printf("Armstrong \n");
    }
    else
    {
        printf("Not Armstrong \n");
    }


}

