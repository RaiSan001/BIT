//program to convert specified days into years, weeks and days

#include <stdio.h>

int main()
{
    int days = 0;
    printf("Enter no of days: \n");
    scanf("%d", &days);

    int years = days / 365;
    printf("Years = %d\n", years);

    int weeks = ((days - (years * 365)) / 7);
    printf("Weeks = %d\n", weeks);

    int rdays =  ((days - (years * 365)) % 7);
    printf("Days = %d\n", rdays);

    return 0;
}
