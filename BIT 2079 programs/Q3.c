//Write a program to find average, minimum and maximum age in a class of 20 students.

#include <stdio.h>


int main()
{
    int arr[] = {11, 12, 13, 12, 11, 14, 15, 10, 11, 15, 14, 13,12,11, 10, 10, 13, 15, 15, 12};


    int smallest = arr[0];
    int largest = arr[0];
    float average = 0.0;
    int sum = 0;

    for (int i = 0; i < 20; ++i)
    {
        sum = sum + arr[i];
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }


    printf("Average = %.2f\n", (sum / 20.0));
    printf("Smallest = %d\n", smallest);
    printf("Largest = %d\n", largest);

    return 0;
}
