#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[10];
    int id;
    int salary;
} *employees;

int main()
{
    struct employee employee1;
    struct employee employee2;
    struct employee employee3;

    strcpy(employee1.name, "asher");
    strcpy(employee2.name, "ashish");
    strcpy(employee3.name, "ashwin");

    employee1.id = 1;
    employee2.id = 2;
    employee3.id = 3;

    employee1.salary = 10000;
    employee2.salary = 10000;
    employee3.salary = 10000;
    employees = (struct employee *)malloc(10 * sizeof(struct employee *));

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", employees[i].id);
    }

    return 0;
}