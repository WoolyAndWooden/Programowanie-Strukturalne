#include <stdio.h>
#include <stdlib.h>
//Nazwane 3215 przez pomyłkę, jest to zadanie 3.2.16

void * foo(int const * a, int * const b)
{
    *b = *a;
}
int main()
{
    const int a = 5;
    int b = 4;
    printf("a = %d o adresie %x\nb = %d o adresie %x\n", a, &a, b, &b);
    foo(&a, &b);
    printf("a = %d o adresie %x\nb = %d o adresie %x\n", a, &a, b, &b);
    return 0;
}
