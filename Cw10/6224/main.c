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

void foo2(int **tab, unsigned int a, unsigned int b)
{
    int p = 0;
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < a-1; j++)
        {
            p = tab[j][i];
            tab[j][i] = tab[a-1-i][i];
            tab[a-1-i][i] = p;
        }
    }

}

int main()
{
    int a = 10;
    int b = 10;
    int ** tab = foo(a, b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            tab[i][j] = i + j;
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("|%d| ", tab[i][j]);
        }
        printf("\n");
    }
    foo2(tab, a, b);
    printf("\n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("|%d| ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
