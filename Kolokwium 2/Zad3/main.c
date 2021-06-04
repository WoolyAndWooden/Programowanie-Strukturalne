#include <stdio.h>
#include <stdlib.h>

float ** stworz(float ** tab, unsigned int a, unsigned int b)
{
    tab = malloc(sizeof(float*) * a);
    for(int i = 0; i < a; i++)
    {
        tab[i] = malloc(sizeof(float) * b);
    }
    return tab;
}

float foo(unsigned int a, unsigned int b, float ** tab)
{
    float mean = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == i)
            {
                mean+=tab[i][j];
            }
        }
    }
    mean/=a;
    return mean;
}
int main()
{
    int a = 5;
    int b = 5;
    float **tab = stworz(tab, a, b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {

            tab[i][j] = i+j+2;
            printf("|%f|", tab[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");
    printf("%f", foo(a, b, tab));
    return 0;
}
