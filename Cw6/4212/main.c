#include <stdio.h>
#include <stdlib.h>

void fooa(unsigned int n, int tab[])
{
    n = n - 1;
    for(int i = 0; i <= n/2; i++)
    {
        int bufor = tab[n-i];
        tab[n-i] = tab[i];
        tab[i] = bufor;
    }
}

void foob(unsigned int n, int tab[])
{
    n = n - 1;
    int bufor = tab[0];
    for(int i = 0; i < n; i++)
    {
        tab[i] = tab[i+1];
    }
    tab[n] = bufor;
}

void fooc(unsigned int n, int tab[])
{
    n = n - 1;
    int bufor = tab[n];
    for(int i = n - 1; i >= 0; i--)
    {
        tab[i+1] = tab[i];
    }
    tab[0] = bufor;
}

void food(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(tab[i] > tab[j])
            {
                int bufor = tab[i];
                tab[i] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    fooa(sizeof(tab) / sizeof(int), tab);

    printf("Podpunkt a:\n");
    for(int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    foob(sizeof(tab) / sizeof(int), tab);

    printf("Podpunkt b:\n");
    for(int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    fooc(sizeof(tab) / sizeof(int), tab);

    printf("Podpunkt c:\n");
    for(int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    food(sizeof(tab) / sizeof(int), tab);

    printf("Podpunkt d:\n");
    for(int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return 0;
}
