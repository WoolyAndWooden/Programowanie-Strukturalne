#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void fooa(unsigned int n, int tab1[], int tab2[], int tab3[]);

void foob(unsigned int n, int tab1[], int tab2[], int tab3[]);

void fooc(unsigned int n, int tab1[], int tab2[], int tab3[]);

int main()
{
    int tab1[] = {1, 2, 3, 4};
    int tab2[] = {5, 6, 7, 8};
    int tab3[] = {9, 1, 2, 3};

    fooa(sizeof(tab1) / sizeof(int), tab1, tab2, tab3);

    printf("Podpunkt a:\n");
    for(int i = 0; i < sizeof(tab1) / sizeof(int); i++)
    {
        printf("%d\n", tab3[i]);
    }

    foob(sizeof(tab1) / sizeof(int), tab1, tab2, tab3);

    printf("Podpunkt b:\n");
    for(int i = 0; i < sizeof(tab1) / sizeof(int); i++)
    {
        printf("%d\n", tab3[i]);
    }

    fooa(sizeof(tab1) / sizeof(int), tab1, tab2, tab3); //Dla zmiany wartości elementów tab3
    fooc(sizeof(tab1) / sizeof(int), tab1, tab2, tab3);

    printf("Podpunkt c:\n");
    for(int i = 0; i < sizeof(tab1) / sizeof(int); i++)
    {
        printf("tab1[%d] = %d, tab2[%d] = %d, tab3[%d] = %d\n", i, tab1[i], i, tab2[i], i, tab3[i]);
    }
    return 0;
}

void fooa(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for(int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];

    }
}

void foob(unsigned int n, int tab1[], int tab2[], int tab3[])
{
     for(int i = 0; i < n; i++)
    {
        if(tab1[i] >= tab2[i])  tab3[i] = tab1[i];
        else tab3[i] = tab2[i];

    }
}

void fooc(unsigned int n, int tab1[], int tab2[], int tab3[])
{
     for(int i = 0; i < n; i++)
    {
        int bufor = tab1[i];
        tab1[i] = tab3[i];
        tab3[i] = tab2[i];
        tab2[i] = bufor;

    }
}
