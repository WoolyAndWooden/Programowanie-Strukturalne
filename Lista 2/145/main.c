#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, suma = 0;

    printf("Wpisz liczbe nieujemne calkowita: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        suma+=i*i;
    }
    printf("Suma kwadratow %d kolejnych liczb calkowitych dodatnich to %d", n, suma);

    return 0;
}
