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

double foo2(int **tab, unsigned int a, unsigned int b)
{
    double mean = 0;
    double maxmean = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            mean+= tab[i][j];
        }
        mean /= b;
        if(mean > maxmean) maxmean = mean;
    }
    return maxmean;
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
    printf("%lf", foo2(tab, a,b));
    return 0;
}
