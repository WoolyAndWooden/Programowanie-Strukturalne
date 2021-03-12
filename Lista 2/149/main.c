#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    printf("Wpisz dwie liczby");
    scanf("%d %d", &n, &m);
    printf("NWD liczb %d i %d to:", n, m);

    while(n != m)
    {
        if(n>m) n-=m;
        else m-=n;
    }

    printf(" %d", n);
    return 0;
}
