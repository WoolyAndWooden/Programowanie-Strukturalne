#include <stdio.h>
#include <stdlib.h>

int ** foo(unsigned int n)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        *(tab + i) = malloc((i+1) * sizeof(int));
    }
    return tab;
}
int main()
{
    int n = 5;
    int ** tab = foo(n);
    for(int i = 0, b = n; i < b; i++, n--)
    {
        printf("|");
        for(int j = 0; j < n; j++)
        {
            *(*(tab + i) + j) = i + j;
            printf("|%d|", *(*(tab + i) + j));
        }
        printf("/ \n");
    }
    return 0;
}
