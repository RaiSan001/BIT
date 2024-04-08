//basic calculator using a function that uses switch case

#include <stdio.h>

float calc (float a, float b, char op);

int main()
{
    float a, b = 0;
    char op = '0';
    printf("What's a? \n");
    scanf("%f", &a);
    printf("What's b? \n");
    scanf("%f", &b);
    printf("What's operator? \n");
    scanf(" %c", &op);

    float result = calc(a, b, op);
    printf("%f", result);

    return 0;
}

float calc (float a, float b, char op)
{
    switch (op) {
        case '+':
            printf("%f", a+b);
            break;

        case '-':
            printf("%f", a-b);
            break;

        case '*':
            printf("%f", a*b);
            break;

        case '/':
            printf("%f", a/b);
            break;

    }
    return 0;
}
