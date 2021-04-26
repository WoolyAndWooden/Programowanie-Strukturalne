#include <stdio.h>
#include <stdlib.h>

int fooa(unsigned int n, int tab[]);

int foob(unsigned int n, int tab[]);

int fooc(unsigned int n, int tab[]);

int food(unsigned int n, int tab[]);

int fooe(unsigned int n, int tab[]);

int foof(unsigned int n, int tab[]);

int main()
{
    int tab = {-1, 1, -2, 2, -3, 3, -4, 4};
    printf("Podpunkt a: %d \nPodpunkt b: %d \nPodpunkt c: %d \nPodpunkt d: %d \n Podpunkt e: %d \n Podpunkt f: %d",
            fooa(sizeof(tab) / sizeof(int), tab),
            foob(sizeof(tab) / sizeof(int), tab),
            fooc(sizeof(tab) / sizeof(int), tab),
            food(sizeof(tab) / sizeof(int), tab),
            fooe(sizeof(tab) / sizeof(int), tab),
            foof(sizeof(tab) / sizeof(int), tab));
    return 0;
}
int fooa(unsigned int n, int tab[])
{
    int max = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] >= max) max = tab[i];
    }
    return max;
}

int foob(unsigned int n, int tab[])
{
    int min = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] <= min) min = tab[i];
    }
    return min;
}

int fooc(unsigned int n, int tab[])
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] >= tab[max]) max = i;
    }
    return max;
}

int food(unsigned int n, int tab[])
{
    int min = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] <= tab[min]) min = i;
    }
    return min;
}

int fooe(unsigned int n, int tab[])
{
    int max = abs(tab[0]);
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) >= max) max = abs(tab[i]);
    }
    return max;
}

int foof(unsigned int n, int tab[])
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) >= abs(tab[max])) max = i;
    }
    return max;
}
