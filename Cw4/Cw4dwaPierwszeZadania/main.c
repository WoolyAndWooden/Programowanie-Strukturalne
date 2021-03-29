#include <stdio.h>
#include <stdlib.h>

int * zad321(int*a, int*b)
{
    if(*a>*b) return *b;
    return *a;
}

int * zad322(int*a, int*b)
{
    if(*a>*b) return b;
    return a;
}

int main()
{
    int zad321a = 5, zad321b = 10;
    printf("\nZad 3.2.1\n%d\n", zad321(&zad321a, &zad321b));
    printf("\nZad 3.2.1\n%x\n", zad322(&zad321a, &zad321b));
    return 0;
}
