#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, suma;

    printf("Wpisz dwie liczby ");
    scanf("%d %d", &n, &m);

    suma = n;
    for(int i = n; i < m; i++)
    {
        printf("%d*", i);
        suma*=i;
    }
    suma*=m;
    printf("%d=%d", m, suma);
    return 0;
}
