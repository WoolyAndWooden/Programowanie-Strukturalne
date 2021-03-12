#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m, k;

    printf("Wpisz 3 liczby dodatnie calkowite: ");
    scanf("%d %d %d", &n, &m, &k);

    for(int i = 1; n*i < k; i++)
    {
        if(n*i > m)
            printf("%d\n", n*i);
    }
    return 0;
}
