#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m;

    printf("Wpisz dwie liczby calkowite dodatnie\n");
    scanf("%d %d", &n, &m);

    for(int i = 1; n*i < m; i++)
    {
        printf("%d\n", n*i);
    }
    return 0;
}
