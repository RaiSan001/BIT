//is it palindrome

#include <stdio.h>


int main()
{
    int num, rev = 0;
    printf("Enter num: ");
    scanf("%d", &num);

    int tmp = num;
    while (tmp > 0)
    {
        int last = tmp % 10;
        rev = rev * 10 + last;
        tmp = tmp / 10;
    }


    if (num == rev)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not Palindrome \n");
    }


}

