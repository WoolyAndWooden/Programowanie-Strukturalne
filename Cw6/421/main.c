#include <stdio.h>
#include <stdlib.h>

void fooa(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = 0;
    }

}

void foob(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = i;
    }

}

void fooc(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] *= 2;
    }

}

void food(unsigned int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = abs(tab[i]);
    }

}

int main()
{
    int tab1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Tablica oryginalna:\n");
    for(int i = 0; i< sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }

    fooa(sizeof(tab1) / sizeof(int), tab1);
    printf("Podpunkt a:\n");
    for(int i = 0; i< sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }

    foob(sizeof(tab1) / sizeof(int), tab1);
    printf("Podpunkt b:\n");
    for(int i = 0; i< sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }

    fooc(sizeof(tab1) / sizeof(int), tab1);
    printf("Podpunkt c:\n");
    for(int i = 0; i< sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }

    food(sizeof(tab1) / sizeof(int), tab1);
    printf("Podpunkt d:\n");
    for(int i = 0; i< sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }



    return 0;
}
