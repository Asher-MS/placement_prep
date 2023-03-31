#include <stdio.h>
#include <stdlib.h>

struct point
{
    struct
    {
        int x;
        int y;
    };
    struct
    {
        int l;
        int m;
    };
};

int main(int argc, char const *argv[])
{
    struct point pt;
    pt.x = 10;
    pt.y = 20;
    pt.l = 30;
    pt.m = 40;
    printf("%d\n", pt.x);
    printf("%d\n", pt.y);
    printf("%d\n", pt.l);
    printf("%d\n", pt.m);

    return 0;
}
