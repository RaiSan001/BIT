//compute area and circumference of a circle with given radius r and constant pi

#include <stdio.h>

int main()
{
    printf("Enter Radius: \n");
    float radius = 0;
    scanf("%f", &radius);
    float area = (3.14 * radius * radius);
    float circ = (2 * 3.14 * radius);


    printf("Area = %f\n", area);
    printf("Circumference = %f \n", circ);

    return 0;
}
