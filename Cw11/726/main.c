#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    int n;
    double *wspol;
};

void stworztab1(struct punkt *tab)
{
    tab->wspol = malloc(tab->n * sizeof(double));
}

void foo(struct punkt tab1[], struct punkt tab2[], unsigned int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}
int main()
{
    struct punkt tab1[2], tab2[2];

    for(int i = 0; i < 2; i++)
    {
        tab1[i].n = i+10;
        stworztab1(&tab1[i]);
        for(int j = 0; j < tab1[i].n; j++)
        {
            tab1[i].wspol[j] = i + j;
        }
    }

    foo(tab1, tab2, sizeof(tab1)/sizeof(struct punkt));

    for(int i = 0; i < 2; i++)
    {
        printf("tab2[%d]:\n", i);
        for(int j = 0; j < tab2[i].n; j++)
        {
            printf("\twspol[%d] = %f\n", j, tab2[i].wspol[j]);
        }
    }
    return 0;
}

