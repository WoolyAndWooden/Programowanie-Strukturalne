#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element * foo()
{
    return NULL;
}

int main()
{
    struct element * lista = foo();
    printf("%#x", lista);
    return 0;
}
