/*Write a program to store and display basic information
(roll, name, address, email, and phone) of students of using a structure.*/

#include <stdio.h>

int main ()
{
    int N = 0;
    printf("Enter number of students: \n");
    scanf("%d", &N);

    struct students
    {
        int roll;
        char name[10];
        char address[20];
        char email[50];
        int number;
    };

    struct students stud[N];
    for (int i = 0; i < N; ++i)
    {
        printf("Enter roll: \n");
        scanf("%d", &stud[i].roll);

        printf("Enter name: \n");
        scanf("%s", stud[i].name);

        printf("Enter address: \n");
        scanf("%s", stud[i].address);

        printf("Enter email: \n");
        scanf("%s", stud[i].email);

        printf("Enter number: \n");
        scanf("%d", &stud[i].number);
    }

    for (int j = 0; j < N; ++j)
    {
        printf("Roll no = %d\n", stud[j].roll);

        printf("Name = %s\n", stud[j].name);

        printf("Address = %s\n", stud[j].address);

        printf("email = %s\n", stud[j].email);

        printf("Number = %d\n", stud[j].number);
    }

    return 0;
}
