#include <stdio.h>
#include <stdlib.h>

void * zamien(int *a, int *b)
{
    int zam = *a;
    *a = *b;
    *b = zam;
}
void * foo1(int *a, int *b, int *c)
{
    while(!(*a>=*b && *b>=*c))
    {
        if(*a<=*b)
            zamien(a, b);
        if(*b<=*c)
            zamien(b, c);
    }
}

int main()
{
    int a = 1;
    int b = 3;
    int c = 2;
    printf("%d %d %d\n", a, b, c);
    foo1(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
