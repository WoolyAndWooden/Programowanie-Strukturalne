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
int main()
{
    int ** tab = foo(2, 5);
    tab[1][4] = 5;
    printf("%d", tab[1][4]);
    return 0;
}
