#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int a, unsigned int b, double tab[][b])
{
    double temp;
    for(int i = 0; i < a; i++)
    {
        if(i%2 != 0)
        {
            for(int j = 0; j < b/2; j++)
            {
                temp = tab[i][j];
                tab[i][j] = tab[i][b-1-j];
                tab[i][b-1-j] = temp;
            }
        }
    }
}

int main()
{
    double tab[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tab[i][j] = ((i+6) * (j+4))/2;
            printf("|%lf|", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    foo(5, 5, tab);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("|%lf|", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
