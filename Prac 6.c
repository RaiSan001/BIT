//program to add, sub, multiply and divide two numbers

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d = 0;
    printf("What's a? \n");
    scanf("%lf", &a);
    printf("What's b? \n");
    scanf("%lf", &b);
    printf("What's c? \n");
    scanf("%lf", &c);

    d = (b*b-4*a*c);
    if (d >= 0)
    {
        double r1 = ((-b) + sqrt(d))/(2*a);
        double r2 = ((-b) - sqrt(d))/(2*a);
        printf("Roots are %f and %f\n", r1, r2);
    }
    else
    {
        printf("Roots are imaginary\n");
    }

    return 0;
}
