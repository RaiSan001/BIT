//program to add, sub, multiply and divide two numbers

#include <stdio.h>

int main()
{
    float a = 0;
    printf("Enter A: \n");
    scanf ("%f", &a);
    float b = 0;
    printf("Enter B: \n");
    scanf("%f", &b);

    printf("Sum = %f\n", a+b);
    printf("Difference = %f\n", a-b);
    printf("Product = %f\n", a*b);
    printf("Quotient = %f\n", a/b);

    return 0;
}
