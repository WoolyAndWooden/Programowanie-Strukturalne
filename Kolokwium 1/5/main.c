#include <stdio.h>
#include <stdlib.h>

int * foo(unsigned int * n, int * tab[])
{
    if(*n*2 == sizeof(tab)/sizeof(int))
    {
        n+=1;
    }
    for(int i = 0; i < *n; i++)
    {
        if(*tab[i]%2 == 0) return &tab[i];
    }
    return &tab;
}
int main()
{
    int tab1 = {1, 3, 7};
    int tab2 = {5, 2, 4, 5};

    printf("Hello world!\n");
    return 0;
}
