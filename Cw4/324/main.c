#include <stdio.h>
#include <stdlib.h>

void * foo(int *a, int *b)
{
    if(*a > *b)
    {
        int zamiana = *b;
        *b = *a;
        *a = zamiana;
    }
}

int main()
{

    int a = 5;
    int b = 4;
    printf("%x\n%x\n", &a, &b);
    foo(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    printf("%x\n%x", &a, &b);
    return 0;
}
