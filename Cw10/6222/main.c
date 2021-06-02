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
    int temp;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b/2; j++)
        {
            temp = tab[i][j];
            tab[i][j] = tab[i][b-1-j];
            tab[i][b-1-j] =temp;
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
