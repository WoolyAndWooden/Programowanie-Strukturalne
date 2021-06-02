#include <stdio.h>
#include <stdlib.h>

int *** foo(unsigned int n, unsigned int m, unsigned int e)
{
    int ***tab = malloc(sizeof(int**) * n);
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(sizeof(int*) * m);
        for(int j = 0; j < m; j++)
        {
            *(*(tab + i) + j) = malloc(sizeof(int) * e);

        }
    }
    return tab;
}
int (* foo3(unsigned int n, unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}
void foo2(int *** tab, unsigned int n, unsigned int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            free(*(*(tab + i) + j));
        }
        free(*(tab + i));
    }
    free(tab);
}
int main()
{
    int *** tab = foo(2, 3, 4);
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("[");
            for(int n = 0; n < 4; n++)
            {
                *(*(*(tab+i)+j)+n) = i * j * n;
                printf("|%d|", *(*(*(tab+i)+j)+n));
            }
            printf("]\n");
        }
    }
    foo2(tab, 2, 3);


    return 0;
}
