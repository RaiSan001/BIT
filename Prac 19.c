// sort an array in ascending and descending order

#include <stdio.h>
#include <limits.h>

#define MAX 10

void ascend(int arr[MAX], int asc[MAX]);
void descend(int arr[MAX], int des[MAX]);
void print_array(int arr[MAX]);


int main()
{
    int arr[MAX] = {8, 10, 7, 8, 43, 26, 76, 99, 54, 21};
    int des[MAX], asc[MAX];

    printf("In ascending order \n");
    ascend(arr, asc);
    print_array(asc);
    printf("\n");

    printf("In descending order \n");
    descend(arr, des);
    print_array(des);


    return 0;
}

void print_array(int arr[MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void ascend(int arr[MAX], int asc[MAX])
{
    for (int a = 0; a < MAX; a++)
    {
        asc[a] = arr[a];
    }

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = 0; j < MAX - 1 - i; j++)
        {
            if (asc[j] > asc[j+1])
            {
                int tmp = asc[j];
                asc[j] = asc[j+1];
                asc[j+1] = tmp;
            }
        }
    }
}

void descend(int arr[MAX], int des[MAX])
{
    for (int a = 0; a < MAX; a++)
    {
        des[a] = arr[a];
    }

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = 0; j < MAX - 1 - i; j++)
        {
            if (des[j] < des[j+1])
            {
                int tmp = des[j];
                des[j] = des[j+1];
                des[j+1] = tmp;
            }
        }
    }
}
