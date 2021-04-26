#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo(unsigned int n, unsigned int tab[])
{
    int g = 1;
    for(int i = 0; i < n; i++)
    {
        g *= tab[i];
    }

    return pow(g, 1.0/n);
}

int main()
{
    unsigned int tab1[] = {1, 2, 3, 4, 5, 6};
    printf("%f", foo(sizeof(tab1) / sizeof(unsigned int), tab1));
    return 0;
}
