#include <stdio.h>
#include <stdlib.h>

int ** alokuj(unsigned int n, unsigned int m)
{
    int **tab = malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(sizeof(int) * m);
    }
    return tab;
}

float fun(int ** tab, int tab2[][5])
{
    float maxmean = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if((tab[i][j] + tab2[i][j]) / 2 > maxmean)
                maxmean = (tab[i][j] + tab2[i][j]) / 2;
        }
    }
    return maxmean;
}
int main()
{
    int ** tab;
    int tab2[5][5];
    tab = alokuj(5, 5);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tab[i][j] = i+j+1;
            printf("|%d|", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tab2[i][j] = i+j+2;
            printf("|%d|", tab2[i][j]);
        }
        printf("\n");
    }
    printf("\n%f", fun(tab, tab2));

    return 0;
}
