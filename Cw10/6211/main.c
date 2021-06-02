#include <stdio.h>
#include <stdlib.h>

int ** foo(unsigned int n, unsigned int m)
{
    int **tab = malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(sizeof(int) * m);
    }
    return tab;
}

int foosum(int **tab, unsigned int a)
{
    int sum = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            sum += tab[i][j];
        }
    }
    return sum;
}

int main()
{
    int a = 10;
    int b = 100;
    int ** tab = foo(a, b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            tab[i][j] = i + j;
        }
    }
    printf("%d", foosum(tab, a));
    return 0;
}
