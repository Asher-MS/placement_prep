#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct address
{
    char city[20];
    int pin;
};

struct employee
{
    char name[20];
    struct address add;
};

int main()
{
    struct employee emp;
    strcpy(emp.name, "asher");
    strcpy(emp.add.city, "Kottarakara");
    emp.add.pin = 691566;
    printf("%s\n%s\n%d", emp.name, emp.add.city, emp.add.pin);
}