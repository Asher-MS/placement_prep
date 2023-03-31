#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int marks[3];
};

int main()
{
    struct student asher = {"asher", {1, 2, 3}};
    printf("%s", asher.name);
    printf("%d", asher.marks[0]);
    printf("%d", asher.marks[1]);
    printf("%d", asher.marks[2]);
    return 0;
}