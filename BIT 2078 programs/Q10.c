//Write a program to find smallest element of an array using a pointer.

#include <stdio.h>


int main()
{
    int *ptr;
    int arr[] = {10, 30, 5, 82, 3, 79};

    ptr = arr;
    int smallest = *ptr;

    for (int i = 0; i < 6; ++i)
    {
        if (*(ptr+i) < smallest)
        {
            smallest = *(ptr+i);
        }
    }

    printf("Smallest = %d\n", smallest);

    return 0;
}
