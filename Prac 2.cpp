//Display size in bytes of different data type using sizeof()

#include <stdio.h>

int main()
{
    int integer = sizeof(int);
    int character = sizeof(char);
    int floating = sizeof(float);
    int doubl = sizeof(double);

    printf("Integer: %d bytes\n", integer);
    printf("Character: %d bytes\n", character);
    printf("Float: %d bytes\n", floating);
    printf("Doible: %d bytes\n", doubl);

    return 0;
}
